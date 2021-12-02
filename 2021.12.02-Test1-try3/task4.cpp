#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int h = 0;
	int m = 0;
	int r = 0;
	cin >> h >> m >> r;
	double g = m / r * 6.67 * 1 / 100000000000;
	cout << sqrt(2 * h / g);
	return EXIT_SUCCESS;
}