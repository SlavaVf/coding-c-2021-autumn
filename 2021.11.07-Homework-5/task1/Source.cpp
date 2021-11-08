#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv) {
	int a = 0;
	cout << "Enter a number: ";
	cin >> a;

	cout << "Enter the first bit to be changed: ";
	int bit1 = 0;
	cin >> bit1;

	cout << "Enter the second bit to be changed: ";
	int bit2 = 0;
	cin >> bit2;

	vector <int> data;
	int newBit2 = 0;
	int newBit1 = 0;
	int value = *((int*)&a);
	for (int i = 0; i < sizeof(int) * 8; i++) {
		int currentBit = sizeof(int) * 8 - 1 - i;
		int bitMask = 1 << currentBit;
		int bit = value & bitMask;
		bit = bit >> currentBit;
		data.push_back(bit);
		if (i == bit1 - 1) {
			newBit2 = bit;
		}
		if (i == bit2 - 1) {
			newBit1 = bit;
		}
	}
	data.at(bit1 - 1) = newBit1;
	data.at(bit2 - 1) = newBit2;
	int i = 1;
	for (auto now : data) {
		cout << now;
		if (i % 4 == 0) {
			cout << " ";
		}
		i++;
	}
	return EXIT_SUCCESS;
}