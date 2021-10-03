#include <iostream>

using namespace std;

int main(int argc, char* agrv[]) {
	int n = 0;
	cin >> n;
	int res = 0;
	for (int i = 0; i < n; i++) {
		int x = 0;
		cin >> x;
		res += x;
	}
	cout << res;
	return EXIT_SUCCESS;
}