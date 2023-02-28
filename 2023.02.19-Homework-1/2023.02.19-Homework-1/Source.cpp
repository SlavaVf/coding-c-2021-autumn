#include <iostream>
#include <string>

struct Animal {
	std::string type;
	std::string name;
	int age;

	Animal() {
		this->type = "default";
		this->name = "default";
		this->age = 0;
	}
	Animal(std::string type, std::string name, int age) {
		this->type = type;
		this->name = name;
		this->age = age;
	}
	Animal(const Animal& animal) {
		this->type = animal.type;
		this->name = animal.name;
		this->age = animal.age;
	}
	~Animal() {};
};

void printAnimal(Animal animal) {
	std::cout << "type: " << animal.type << "\n" << "name: " <<
		animal.name << "\n" << "age: " << animal.age << std::endl;
}

void elderAnimal(Animal& animal) {
	animal.age += 1;
}

int main(int argc, char* argv[]) {
	Animal danimal;
	printAnimal(danimal);
	Animal animal("human", "slava", 19);
	elderAnimal(animal);
	Animal canimal(animal);
	printAnimal(canimal);
	return EXIT_SUCCESS;
}