#include <iostream>

struct Shape {
	virtual ~Shape() {};
	virtual double Area() const = 0;
};

struct Rectangle : Shape {
	double a;
	double b;

	Rectangle(double a, double b) : a(a), b(b) {};
	~Rectangle() {};

	double Area() const override {
		return a * b;
	}
};

struct Circle : Shape {
	double r;

	Circle(double r) : r(r) {};
	~Circle() {};

	double Area() const override {
		return 3.1415 * r * r;
	}
};

struct Triangle : Shape {
private:
	double p;
public:
	double a;
	double b;
	double c;

	Triangle(double a, double b, double c) : a(a), b(b), c(c), p((a + b + c) / 2.0) {};
	~Triangle() {};

	double Area() const override {
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
};

struct Square : Shape {
	double a;

	Square(double a) : a(a) {};
	~Square() {};

	double Area() const override {
		return a * a;
	}
};

int main() {
	Triangle tri(3, 4, 5);
	Rectangle rec(5, 6);
	Circle cir(5);
	Square sq(5);
	std::cout << tri.Area() << std::endl;
	std::cout << rec.Area() << std::endl;
	std::cout << sq.Area() << std::endl;
	std::cout << cir.Area() << std::endl;
	return EXIT_SUCCESS;
}