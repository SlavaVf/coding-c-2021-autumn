#include <iostream>
#include <clocale>

using namespace std;

int main(int agrc, char* argv[]) {
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "Введите числа для умножения : " << endl;
	cin >> n >> m;
	cout << "Произведение чисел равно : " << endl;
	cout << n * m << endl;
	return EXIT_SUCCESS;
}