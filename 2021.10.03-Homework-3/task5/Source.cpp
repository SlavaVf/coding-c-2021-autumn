#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* agrv[]) {
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}
	return EXIT_SUCCESS;
}