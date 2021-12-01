#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	cin >> n;
	int data[1000];
	int cur = 0;
	int res = 0;
	for (int i = 0; i < n; i++) {
		int x = 0;
		cin >> x;
		data[i] = x;
	}
	for (int i = 0; i < (n + 2); i++) {
		cur = data[i % n] + data[(i + 1) % n] + data[(i + 2) % n];
		if (cur > res) {
			res = cur;
		}
	}
	cout << res;
	return EXIT_SUCCESS;
}