#include "Laba3.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double eps;
	int n, k;
	for (0; true; 0) {
		cout << "1. ������� 1\n2. ������� 2\n3. ������� 3\n4. ������� 4\n5. ������� 5\n6. �����\n";
		switch (_getch()) {
		case '1':
			cout << "������� 1. ������� ����� �����:\nn = ";
			cin >> n;
			cout << summ(n) << endl;
			cout << "������� ����� ������� ��� �������� � ����" << endl;
			_getch();
			break;
		case '2':
			cout << "������� 2. ������� ��������:\neps = ";
			cin >> eps;
			cout << summ2(eps) << endl;
			cout << "������� ����� ������� ��� �������� � ����" << endl;
			_getch();
			break;
		case '3':
			cout << "������� 3. ������� ����� ����� � ��� ���������:\nn = ";
			cin >> n;
			cout << "k = ";
			cin >> k;
			print(n, k);
			cout << "������� ����� ������� ��� �������� � ����" << endl;
			_getch();
			break;
		case '4':
			cout << "������� 4. ������� ��������:\neps = ";
			cin >> eps;
			cout << findFirstElement(eps) << endl;
			cout << "������� ����� ������� ��� �������� � ����" << endl;
			_getch();
			break;
		case '5':
			cout << "������� 5. ������� ��������:\neps = ";
			cin >> eps;
			cout << findFirstNegativeElement(eps) << endl;
			cout << "������� ����� ������� ��� �������� � ����" << endl;
			_getch();
			break;
		case '6':
			cout << "�����!" << endl;
			return 0;
		default:
			cout << "� ��� �� ����?????????" << endl;
			break;
		}
	}
}
