#include <iostream>

int gcd(int num, int den) {
	int a = num;
	int b = den;
	if (a < b) {
		std::swap(a, b);
	}
	while (a % b != 0) {
		a = a % b;
		std::swap(a, b);
	}
	return b;
}

class Fraction {
private:
	int num = 0;
	int den = 1;
	void Normalize() {
		int tmp = num;
		num /= gcd(num, den);
		den /= gcd(tmp, den);
	}
public:
	Fraction() {};		// constructors, destructors
	Fraction(int num, int den) : num(num), den(den) { Normalize(); };
	Fraction(int num) : num(num), den(1) {};
	Fraction(const Fraction& frac) {
		num = frac.num;
		den = frac.den;
	}
	~Fraction() {};

	Fraction operator+ (int n) {
		Fraction res(num + n * den, den);
		Normalize();
		return res;
	}
	Fraction operator+ (Fraction frac) {
		Fraction res(num * frac.den + frac.num * den, frac.den * den);
		Normalize();
		return res;
	}
	Fraction operator- (int n) {
		Fraction res(num - n * den, den);
		Normalize();
		return res;
	}
	Fraction operator- (Fraction frac) {
		Fraction res(num * frac.den - frac.num * den, frac.den * den);
		Normalize();
		return res;
	}
	Fraction operator* (int n) {
		Fraction res(num * n, den);
		Normalize();
		return res;
	}
	Fraction operator* (Fraction frac) {
		Fraction res(num * frac.num, den * frac.den);
		Normalize();
		return res;
	}
	Fraction operator/ (int n) {
		Fraction res(num, den * n);
		Normalize();
		return res;
	}
	Fraction operator/ (Fraction frac) {
		Fraction res(num * frac.den, den * frac.num);
		Normalize();
		return res;
	}
	friend Fraction operator+(int n, Fraction frac);
	friend Fraction operator*(int n, Fraction frac);
	friend Fraction operator-(int n, Fraction frac);
	friend Fraction operator/(int n, Fraction frac);
	friend std::ostream& operator<< (std::ostream& os, const Fraction& frac);
	friend std::istream& operator>> (std::istream& s, Fraction& frac);
};

Fraction operator+(int n, Fraction frac) {
	Fraction res(frac.num + n * frac.den, frac.den);
	return res;
}

Fraction operator* (int n, Fraction frac) {
	Fraction res(frac.num * n, frac.den);
	return res;
}

Fraction operator/ (int n, Fraction frac) {
	Fraction res(frac.den * n, frac.num);
	return res;
}

Fraction operator- (int n, Fraction frac) {
	Fraction res(n * frac.den - frac.num, frac.den);
	return res;
}
std::istream& operator>> (std::istream& s, Fraction& frac) {
	s >> frac.num;
	s >> frac.den;
	return s;
}

std::ostream& operator<< (std::ostream& os, const Fraction& frac) {
	if (frac.num == 0) { return os << 0; }
	else if (frac.den == 1) { return os << frac.num; }
	else if (frac.den == 0) { return os << "Division by zero! " << frac.num << "/" << frac.den; }
	else { return os << frac.num << "/" << frac.den; }
}

int main() {
	Fraction frac1(1);
	Fraction frac(10, 3);
	std::cin >> frac1;
	std::cout << 2 + frac1;
	return EXIT_SUCCESS;
}