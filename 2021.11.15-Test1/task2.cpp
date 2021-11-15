#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	char c = 0;
	bool flag = true;
	vector <int> data;
	while (c != '\n') {
		cin >> n;
		data.push_back(n);
		c = getchar();	
	}
	int min = 100000000000;
	int max = -10000000000;
	for (int i = 1; i <= data.size(); i++) {
		if (i % 2 == 0) {
			if (data[i - 1] > max) {
				max = data[i - 1];
			}
		}
		else {
			if (data[i - 1] < min) {
				min = data[i - 1];
			}
		}
	}
	cout << min + max;
	return EXIT_SUCCESS;
}