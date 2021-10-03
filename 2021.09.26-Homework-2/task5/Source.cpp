#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	cin >> n;
	if (n == 1) {
		cout << "YES";
		}
	else if (n % 2 != 0) {
		cout << "NO";
	}
	else if (n / 2 % 2 == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return EXIT_SUCCESS;
}