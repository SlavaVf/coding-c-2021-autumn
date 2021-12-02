#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int x = 0; 
	int y = 0;
	cin >> x >> y;
	for (int i = 1; i <= 8; i++) {
		cout << endl;
		for (int j = 1; j <= 8; j++) {
			if (y == i && x == j) {
				cout << 0 << " ";
			}
			else if (y == i || x == j || x + y == i + j || x - j == y - i) {
				cout << 1 << " ";
			}
			else {
				cout << 2 << " ";
			}
		}
	}
	return EXIT_SUCCESS;
}