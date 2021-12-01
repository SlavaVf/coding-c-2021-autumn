#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	cin >> n;
	int res = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int x = 0;
			cin >> x;
			if (x == 1 && j >= i) {
				res += 1;
			}
		}
	}
	cout << res;
	return EXIT_SUCCESS;
}