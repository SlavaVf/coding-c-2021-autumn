#include <iostream>
#include <string>


class Animal {
private:
	int power = 1;
public:
	std::string name;
	std::string type;

	Animal(std::string name, std::string type) : name(name), type(type) {};
	Animal() : name("default"), type("default") {};
	Animal(const Animal& animal) : name(animal.name), type(animal.type) {};
	~Animal() {};

	std::string getName() {
		return name;
	}
	std::string getType() {
		return type;
	}
	int getPower() {
		return power;
	}
	void setName(std::string name) {
		this->name = name;
	}
	void setType(std::string type) {
		this->type = type;
	}
	void PowerUp() { ++power; }
	void printInfo() {
		std::cout << name << " " << type << " " << power << std::endl;
	}
};

void pop_value(Animal*& arr, size_t ind ,size_t& size) {
	size_t j = 0;
	Animal* newArr = new Animal[size - 1];
	for (size_t i = 0; i != size; ++i) {
		if (i == ind) { continue; }
		newArr[j] = arr[i];
		++j;
	}
	--size;
	delete[] arr;
	arr = newArr;
}
size_t AnimalFight(Animal& a1, Animal& a2) {

	if (a1.getPower() > a2.getPower()) {
		a1.PowerUp();
		return 0;
	}
	else if (a1.getPower() < a2.getPower()) {
		a2.PowerUp();
		return 1;
	}
	else {
		if (rand() % 2 == 1) {
			a1.PowerUp();
			return 0;
		}
		else {
			a2.PowerUp();
			return 1;
		}
	}
}

void BeginArenaFight(Animal*& arena, size_t& arenaAlive) {
	for (size_t i = 0; i != arenaAlive; ++i) {
		pop_value(arena, i + AnimalFight(arena[i], arena[i + 1]), arenaAlive);
	}
}

int main(int argc, char* argv[]) {
	srand(time(NULL));
	Animal bob("bob", "bizon");
	Animal kiss("kiss", "kupidon");
	Animal who;
	who.printInfo();
	bob.setName("slava");
	bob.printInfo();
	kiss.printInfo();
	AnimalFight(bob, kiss);


	size_t arenaAlive = 128;
	Animal* arena = new Animal[arenaAlive];
	for (size_t i = 0; i != 128; ++i) {
		arena[i].setType("arenaFighter");
		arena[i].setName("fighter" + std::to_string(i));
	}
	while (arenaAlive != 1) {
		BeginArenaFight(arena, arenaAlive);
	}
	std::cout << "The winner is... " << arena[0].getName() << "!!!" << std::endl;
	delete[] arena;
	return EXIT_SUCCESS;
}