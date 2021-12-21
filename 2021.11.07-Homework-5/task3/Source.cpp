#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	double x = 0;
	cin >> x;
	long long int value = *((long long int*) & x);
	long long int bm = 1;
	bm = bm << sizeof(double) * 8 - 1;
	bm = ~bm;
	value = value & bm;
	double y = *((double*)&value);
	cout << y;
	return EXIT_SUCCESS;
}