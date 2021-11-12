#include <conio.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 1;
	cout << "Pay attention! If you exceed the length of the array, its capacity will double.\n";
	int* data = new int[n] { 0 };
	bool flag = true;
	cout << "What do you want to do?\n";
	cout << "0 - Exit\n";
	cout << "1 - Output the current array\n";
	cout << "2 - Add a new element to the end\n";
	cout << "3 - Add a new element to the beginning\n";
	cout << "4 - Delete the last element\n";
	cout << "5 - Delete the first element\n";
	cout << "6 - Expand the array\n";
	int cur_length = 0;
	while (flag) {
		char c = 0;
		c = _getch();
		switch (c) {
		case 48: {
			flag = false;
			break;
		}
		case 49: {
			for (int i = 0; i < n; i++) {
				cout << data[i] << " ";
			}
			cout << endl;
			break;
		}
		case 50: {
			int a = 0;
			cout << "Enter a new element to the end: ";
			cin >> a;
			cout << endl;
			if (cur_length < n) {
				data[cur_length] = a;
			}
			else {
				n = n * 2;
				int* tempdata = new int[n] { 0 };
				for (int i = 0; i < n / 2; i++) {
					tempdata[i] = data[i];
				}
				data = tempdata;
				data[cur_length] = a;
			}
			cur_length += 1;
			break;
		}
		case 51: {
			int a = 0;
			cout << "Enter a new element to the beginning: ";
			cin >> a;
			cout << endl;
			if (cur_length < n) {
				int* tempdata = new int[n] { 0 };
				for (int i = 0; i < cur_length; i++) {
					tempdata[i + 1] = data[i];
				}
				data = tempdata;
				data[0] = a;
				cur_length += 1;
				break;
			}
			else {
				n = n * 2;
				int* tempdata = new int[n] { 0 };
				for (int i = 0; i < cur_length; i++) {
					tempdata[i + 1] = data[i];
				}
				data = tempdata;
				data[0] = a;
				cur_length += 1;
				break;
			}
		}
		case 52: {
			data[cur_length - 1] = 0;
			cur_length -= 1;
			if (cur_length < 0) {
				cur_length = 0;
			}
			break;
		}
		case 53: {
			int* tempdata = new int[n] { 0 };
			for (int i = 1; i < cur_length; i++) {
				tempdata[i - 1] = data[i];
			}
			data = tempdata;
			cur_length -= 1;
			if (cur_length < 0) {
				cur_length = 0;
			}
			break;
		}
		case 54: {
			int* tempdata = new int[n] { 0 };
			for (int i = 0; i < cur_length; i++) {
				tempdata[i] = data[cur_length - 1 - i];
			}
			data = tempdata;
			break;
		}
		}
	}
	delete[] data;
	return EXIT_SUCCESS;
}