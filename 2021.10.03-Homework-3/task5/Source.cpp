#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int main(int argc, char* agrv[]) {
	int n = 0;
	cin >> n;
	set <int> data;
	for (int i = 1; i < sqrt(n) + 1; i++) {
		if (n % i == 0) {
			data.insert(i);
			data.insert(n / i);
		}
	}
	for (auto now : data) {
		cout << now << " ";
	}
	return EXIT_SUCCESS;
}