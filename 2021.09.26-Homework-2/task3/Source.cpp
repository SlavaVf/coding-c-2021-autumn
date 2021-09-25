#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int k = 0;
	int m = 0;
	int n = 0;
	int temp = 0;
	cin >> k >> m >> n;
	if (k == 0 || n == 0 || m == 0) {
		cout << 0;
	}
	else if (n <= k) {
		cout << m * 2;
	}
	else if (n % k != 0 && n % k <= k / 2) {
		temp = n / k + 1;
		cout << temp * 2 * m - m;
	}
	else if (n % k != 0) {
		temp = n / k + 1;
		cout << temp * 2 * m;
	}
	else {
		temp = n / k;
		cout << temp * 2 * m;
	}
	return EXIT_SUCCESS;
}