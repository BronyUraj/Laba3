#include "Laba3.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double eps;
	int n, k;
	while (true) {
		cout << "1. Задание 1\n2. Задание 2\n3. Задание 3\n4. Задание 4\n5. Задание 5\n6. Выход\n";
		switch (_getch()) {
		case '1':
			cout << "Задание 1. Введите номер члена:\nn = ";
			cin >> n;
			cout << summ(n) << endl;
			cout << "Нажмите любую клавишу для перехода в меню" << endl;
			_getch();
			break;
		case '2':
			cout << "Задание 2. Введите точность:\neps = ";
			cin >> eps;
			cout << summ2(eps) << endl;
			cout << "Нажмите любую клавишу для перехода в меню" << endl;
			_getch();
			break;
		case '3':
			cout << "Задание 3. Введите номер члена и его кратность:\nn = ";
			cin >> n;
			cout << "k = ";
			cin >> k;
			print(n, k);
			cout << "Нажмите любую клавишу для перехода в меню" << endl;
			_getch();
			break;
		case '4':
			cout << "Задание 4. Введите точность:\neps = ";
			cin >> eps;
			cout << findFirstElement(eps) << endl;
			cout << "Нажмите любую клавишу для перехода в меню" << endl;
			_getch();
			break;
		case '5':
			cout << "Задание 5. Введите точность:\neps = ";
			cin >> eps;
			cout << findFirstNegativeElement(eps) << endl;
			cout << "Нажмите любую клавишу для перехода в меню" << endl;
			_getch();
			break;
		case '6':
			cout << "Выход!" << endl;
			return 0;
		default:
			cout << "И что ты ввел?????????" << endl;
			break;
		}
	}
}
