#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	cin >> n;
	int res = 1;
	for (int i = 0; i < n; i++) {
		res *= 2;
	}
	cout << res;
	return EXIT_SUCCESS;
}