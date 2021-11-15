#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	cin >> n;
	vector <int> data;
	int max = -100000;
	int min = 1000000;
	for (int i = 0; i < n; i++) {
		int a = 0;
		cin >> a;
		data.push_back(a);
		if (a > max) {
			max = a;
		}
		if (a < min) {
			min = a;
		}
	}
	for (int i = 0; i < data.size(); i++) {
		if (data[i] == max) {
			data[i] = min;
		}
		cout << data[i] << " ";
	}
	return EXIT_SUCCESS;
}