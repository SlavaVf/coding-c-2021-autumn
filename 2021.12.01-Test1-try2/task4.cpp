#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int end = 1000000001;
	int start = 1;
	int mid_aka_res = (end - start) / 2;
	char input = 0;
	cout << mid_aka_res << endl;
	while (1) {
		cin >> input;
		if (input == '=') {
			cout << mid_aka_res;
			break;
		}
		else {
			if (input == '<') {
				end = mid_aka_res;
				mid_aka_res = start + (end - start) / 2;
				cout << mid_aka_res << endl;
				cout.flush();
			}
			else {
				start = mid_aka_res;
				mid_aka_res = start + (end - start) / 2;
				cout << mid_aka_res << endl;
				cout.flush();
			}
		}
	}
	return EXIT_SUCCESS;
}