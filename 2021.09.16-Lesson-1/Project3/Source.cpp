#include <iostream>
#include <clocale>

using namespace std;

int main(int agrc, char* argv[]) {
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "������� ����� ��� ��������� : " << endl;
	cin >> n >> m;
	cout << "������������ ����� ����� : " << endl;
	cout << n * m << endl;
	return EXIT_SUCCESS;
}