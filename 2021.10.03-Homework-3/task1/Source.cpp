#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	int res = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	cout << res;
	return EXIT_SUCCESS;
}