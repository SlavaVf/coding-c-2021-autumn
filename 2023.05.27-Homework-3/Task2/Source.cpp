#include <iostream>
#include <string>
#include <algorithm>


struct Student {
	std::string surname;
	std::string name;
	double meanGrade;

	Student(std::string surname, std::string name, double meanGrade) : surname(surname), name(name), meanGrade(meanGrade) {};
	Student() : surname("default"), name("default"), meanGrade(0) {};
	Student(const Student& student) : surname(student.surname), name(student.name), meanGrade(student.meanGrade) {};
	~Student() {};
	
};

void BubbleSort(Student* arr, size_t len) {
	while (len--) {
		bool swapped = false;
		for (size_t i = 0; i != len; ++i) {
			if (arr[i].meanGrade < arr[i + 1].meanGrade) {
				std::swap(arr[i], arr[i + 1]);
				swapped = true;
			}
		}
		if (swapped == false) { break; }
	}
}

bool compare(Student s1, Student s2) {
	return (s1.meanGrade > s2.meanGrade);
}
	int main() {
		size_t n = 0;
		std::cin >> n;
		Student* students = new Student[n];
		for (size_t i = 0; i != n; ++i) {
			std::cin >> students[i].surname;
			std::cin >> students[i].name;
			double a = 0;
			double b = 0;
			double c = 0;
			std::cin >> a >> b >> c;
			students[i].meanGrade = (a + b + c) / 3.0;
		}
		std::stable_sort(&students[0], &students[n], compare);
		for (size_t i = 0; i != n; ++i) {
			std::cout << students[i].surname << " " << students[i].name << std::endl;
		}
		delete[] students;
		return EXIT_SUCCESS;
	}
