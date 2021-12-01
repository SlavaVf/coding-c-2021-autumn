#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	cin >> n;
	int res = n * 45;
	if (n % 2 == 0) {
		res += n / 2 * 5 + (n / 2 - 1) * 15;
	}
	else {
		res += n / 2 * 15 + n / 2 * 5;
	}
	cout << 9 + res / 60 << " " << res % 60;
	return EXIT_SUCCESS;
}