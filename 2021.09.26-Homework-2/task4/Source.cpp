#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	if (a == 0 && b == 0 && c == 0 && d == 0) {
		cout << "NO";
	}
	else if (a == 0 && b == 0 && (c != 0 || d != 0)) {
		cout << "INF";
	}
	else if (a == 0 && b != 0) {
		cout << "NO";
	}
	else if (a != 0 && b == 0 && c != 0) {
		cout << 0;
	}
	else if (b % a == 0 && -(b / a) * c + d != 0) {
		cout << -(b / a);
	}
	else {
		cout << "NO";
	}
	return EXIT_SUCCESS;
}