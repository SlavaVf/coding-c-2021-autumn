#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
	int k = 0;
	cin >> k;
	vector <int> data;
	for (int i = 0; i < k; i++) {
		int n = 0;
		int m = 0;
		cin >> n >> m;
		data.push_back((19 * m + (n + 239) * (n + 366) / 2));
	}
	for (auto now : data) {
		cout << now << endl;
	}
	return EXIT_SUCCESS;
}