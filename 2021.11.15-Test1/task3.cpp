#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	cin >> a >> b;
	int temp_a = a;
	int temp_b = b;
	while (temp_a != temp_b) {
		if (temp_a > temp_b) {
			temp_a = temp_a - temp_b;
		}
		else {
			temp_b = temp_b - temp_a;
		}
	}
	cout << a * b / temp_a;
	return EXIT_SUCCESS;
}