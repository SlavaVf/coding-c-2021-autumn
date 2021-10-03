#include <iostream>

using namespace std;

int main(int argc, char* agrv[]) {
	int n = 0;
	cin >> n;
	int poz = 0;
	int zero = 0;
	int neg = 0;
	for (int i = 0; i < n; i++) {
		int x = 0;
		cin >> x;
		if (x == 0) {
			zero += 1;
		}
		else if (x > 0) {
			poz += 1;
		}
		else {
			neg += 1;
		}
	}
	cout << zero << " " << poz << " " << neg;
	return EXIT_SUCCESS;
}