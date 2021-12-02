#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int data[20];
	for (int i = 0; i < size(data); i++) {
		int x = 0;
		cin >> x;
		data[i] = x;
	}
	for (int i = size(data) - 1; i > -1; i--) {
		cout << data[i] << " ";
	}
	return EXIT_SUCCESS;
}