#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv) {
	int a = 0;
	cout << "Enter a number: ";
	cin >> a;
	vector <int> data;
	int value = *((int*)&a);
	for (int i = 0; i < sizeof(int) * 8; i++) {
		int currentBit = sizeof(int) * 8 - 1 - i;
		int bitMask = 1 << currentBit;
		int bit = value & bitMask;
		bit = bit >> currentBit;
		data.push_back(bit);
	}
	if (data[0] != 0) {
		cout << ~a + 1 << endl;
	}
	else {
		cout << a << endl;
	}
	return EXIT_SUCCESS;
}