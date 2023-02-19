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
	Animal(const Animal& lamina) {
		this->type = lamina.type;
		this->name = lamina.name;
		this->age = lamina.age;
	}
	~Animal() {};
};

void printAnimal(Animal lamina) {
	std::cout << "type: " << lamina.type << "\n" << "name: " <<
	lamina.name<< "\n" << "age: " << lamina.age << std::endl;
}

void elderAnimal(Animal& lamina) {
	lamina.age += 1;
}

int main(int argc, char* argv[]) {

	return EXIT_SUCCESS;
}