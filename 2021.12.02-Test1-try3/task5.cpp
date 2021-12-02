#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	int x3 = 0;
	int y3 = 0;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	double b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	double c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	double p = (a + b + c) / 2;
	cout << sqrt(p * (p - a) * (p - b) * (p - c));
	return EXIT_SUCCESS;
}