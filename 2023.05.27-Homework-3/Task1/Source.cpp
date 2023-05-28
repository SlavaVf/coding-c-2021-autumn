#include <iostream>
#include <math.h>

struct Point {
	int x;
	int y;

	Point(int x, int y) : x(x), y(y) {};
	Point() : x(0), y(0) {};
	Point(const Point& point) : x(point.x), y(point.y) {};
	~Point() {};

	double GetDist() {
		return sqrt(x * x + y * y);
	}

};

int main() {
	size_t n = 0;
	std::cin >> n;
	Point* arr = new Point[n];
	for (size_t i = 0; i != n; ++i) {
		int x = 0;
		int y = 0;
		std::cin >> x >> y;
		arr[i].x = x;
		arr[i].y = y;
	}
	for (size_t i = 0; i != n; ++i) {
		for (size_t j = i + 1; j != n; ++j) {
			if (arr[i].GetDist() > arr[j].GetDist()) {
				std::swap(arr[i], arr[j]);
			}
		}
	}
	for (size_t i = 0; i != n; ++i) {
		std::cout << arr[i].x << " " << arr[i].y << std::endl;
	}
	delete[] arr;
	return EXIT_SUCCESS;
}