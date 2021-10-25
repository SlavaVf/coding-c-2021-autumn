#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	cin >> n;
	vector <int> data;
	for (int i = 0; i < n; i++) {
		int x = 0;
		cin >> x;
		data.push_back(x);
	}
	cout << "ARRAY : ";		// task1
	for (auto j : data) {
		cout << j << " ";
	}
	cout << "\n" << "EVEN : ";		// task2
	for (auto j : data) {
		if (j % 2 == 0) {
			cout << j << " ";
		}
	}
	cout << "\n" << "SUM : ";		// task3
	int sum = 0;
	for (auto j : data) {
		sum += j;
	}
	cout << sum;
	cout << "\n" << "PRODUCT OF NEGATIVE : ";		// task4
	int negproduct = 1;
	for (auto j : data) {
		if (j < 0) {
			negproduct *= j;
		}
	}
	cout << negproduct;
	cout << "\n" << "FIRST MIN INDEX : ";		// task5
	int min = 10000000;
	for (auto j : data) {
		if (j < min) {
			min = j;
		}
	} 
	for (int i = 0; i < n; i++) {
		if (data[i] == min) {
			cout << i;
			break;
		}
	}
	cout << "\n" << "SECOND MAX : ";		// task6
	int secmax = -10000000;
	int temp = 0;
	for (auto j : data) {
		if (j > secmax) {
			secmax = j;
			temp += 1;
			if (temp == 2) {
				break;
			}
		}
	}
	cout << secmax << "\n" << "REVERSE : ";		// task7
	for (int i = n - 1; i > -1; i--) {
		cout << data[i] << " ";
	}
	cout << "\n" << "ODD INDEXES : ";		// taks8
	for (int i = 0; i < n; i++) {
		if (i % 2 != 0) {
			cout << data[i] << " ";
		}
	}
	return EXIT_SUCCESS;
}