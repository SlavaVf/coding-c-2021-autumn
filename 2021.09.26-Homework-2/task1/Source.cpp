#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Rus");
	int n = 0;
	cin >> n;
	int h = n / 100;
	int t = n / 10 % 10;
	int u = n % 10;
	switch (h) {
	case 1:
		cout << "��� ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "��������� ";
		break;
	case 5:
		cout << "������� ";
		break;
	case 6:
		cout << "�������� ";
		break;
	case 7:
		cout << "������� ";
		break;
	case 8:
		cout << "��������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	}
	if (10 <= (n % 100) && (n % 100) <= 19) {
		switch (u) {
		case 0:
			cout << "������ �������";
			break;
		case 1:
			cout << "���������� �������";
			break;
		case 2:
			cout << "���������� �������";
			break;
		case 3:
			cout << "���������� �������";
			break;
		case 4:
			cout << "������������ �������";
			break;
		case 5:
			cout << "���������� �������";
			break;
		case 6:
			cout << "����������� �������";
			break;
		case 7:
			cout << "���������� �������";
			break;
		case 8:
			cout << "������������ �������";
			break;
		case 9:
			cout << "������������ �������";
			break;
		}
	}
	else {
		switch (t) {
		case 0:
			break;
		case 2:
			cout << "�������� ";
			break;
		case 3:
			cout << "�������� ";
			break;
		case 4:
			cout << "����� ";
			break;
		case 5:
			cout << "��������� ";
			break;
		case 6:
			cout << "���������� ";
			break;
		case 7:
			cout << "��������� ";
			break;
		case 8:
			cout << "����������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		}
		switch (u) {
		case 0:
			cout << "�������";
		case 1:
			cout << "���� �����";
			break;
		case 2:
			cout << "��� ������";
			break;
		case 3:
			cout << "��� ������";
			break;
		case 4:
			cout << "������ ������";
			break;
		case 5:
			cout << "���� �������";
			break;
		case 6:
			cout << "����� �������";
			break;
		case 7:
			cout << "���� �������";
			break;
		case 8:
			cout << "������ �������";
			break;
		case 9:
			cout << "������ �������";
			break;
		}
	}
	return EXIT_SUCCESS;
}