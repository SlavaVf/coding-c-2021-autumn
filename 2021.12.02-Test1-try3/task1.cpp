#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int res = 0;
	for (int i = 0; i < 100; i++) {
		int x = 0;
		cin >> x;
		res += x;
	}
	cout << res / 100;
	return EXIT_SUCCESS;
}