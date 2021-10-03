#include <iostream>

using namespace std;

double factorial(double l) {
	int retres = 1;
	for (int i = 1; i <= l; i++) {
		retres *= i;
	}
	return retres;
}

int main(int argc, char* agrv[]) {
	double n = 0;
	double k = 0;
	cin >> n >> k;
	cout << factorial(n) / factorial(k) / factorial(n - k);
	return EXIT_SUCCESS;
}