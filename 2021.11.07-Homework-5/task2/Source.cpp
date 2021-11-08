#include <iostream>

using namespace std;		// I've solved the problem due to Microsoft cpp docs
							// which helped me fix warnings C26451 and C6297
int main(int argc, char* argv) {
	double a = 0;
	cout << "Enter a number: ";
	cin >> a;
	long long value = *((long long*)&a);;
	for (int i = 0; i < sizeof(double) * 8; i++) {
		unsigned __int64 currentBit;
		currentBit = static_cast<unsigned __int64>(sizeof(double) * 8) - 1 - i;
		unsigned __int64 bitMask;
		bitMask = static_cast<unsigned __int64>(1) << currentBit;
		unsigned __int64 bit = value & bitMask;
		bit = bit >> currentBit;
		cout << bit;
		if ((i + 1) % 4 == 0) {
			cout << " ";
		}
	}
	return EXIT_SUCCESS;
}