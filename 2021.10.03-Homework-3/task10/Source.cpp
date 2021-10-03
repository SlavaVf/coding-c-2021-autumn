#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (int (sqrt(i)) * int (sqrt(i)) == i) {
			cout << i << " ";
		}
	}
	return EXIT_SUCCESS;
}