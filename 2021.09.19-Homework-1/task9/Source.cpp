#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
	int x;
	cin >> x;
	int crutch = (x * x + x);
	cout << crutch * (crutch - (x - 1)) + 1;    // x^4 + x^3 + x^2 + x + 1 =
	return EXIT_SUCCESS;                        // = (x^2 + x)(x^2 + 1) + 1
}