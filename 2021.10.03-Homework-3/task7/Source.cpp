#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* agrv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	for (int x = 0; x < 1001; x++) {
		if ((a * pow(x, 3) + b * pow(x, 2) + c * x + d) == 0) {
			cout << x << " ";
		}
	}
	return EXIT_SUCCESS;
}