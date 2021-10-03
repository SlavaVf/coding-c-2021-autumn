#include <iostream>

using namespace std;

int main(int argc, char* agrv[]) {
	int n = 0;
	cin >> n;
	int temp = 1;
	int temp1 = 1;
	while (temp <= n && temp1 <= n) {
		for (int i = 0; i < temp; i++) {
			cout << temp1 << " ";
			temp1 += 1;
			if (temp1 > n) {
				break;
			}
		}
		cout << endl;
		temp += 1;
	}
	return EXIT_SUCCESS;
}