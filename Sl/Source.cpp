#include<iostream>
#include<windows.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int one, two, otvet;
	int repeat = 1;
	int mode = 1;
	int repeatt = 0;
	string deystvee;
	while (mode != 0)
	{
		int one, two, otvet;
		int repeat = 1;
		int mode = 1;
		int repeatt = 0;
		string deystvee;
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		cout << "Выберите режим:" << endl;
		cout << "1-Калькулятор" << endl;
		cout << "2-Возведение в степень " << endl;
		cout << "3-Нахождение квадратного корня" << endl;
		cout << "4-Нахождение кубического корня" << endl;
		cout << "5-решение квадратных уравнений" << endl;
		cout << "6-для закрытия приложения" << endl;
		cin >> mode;
		if (mode == 1)
		{
			while (repeat == 1)
			{
				cout << "Введите 1-ое число: ";
				cin >> one;
				cout << "Введите 2-ое число: ";
				cin >> two;
				cout << "Введите знак действия (/,*,+,-) :  ";
				cin >> deystvee;
				if (deystvee == "/")
				{
					otvet = one / two;
					cout << one << "/" << two << "=" << otvet << endl;
				}
				if (deystvee == "*")
				{
					otvet = one * two;
					cout << one << "*" << two << "=" << otvet << endl;
				}
				if (deystvee == "+")
				{
					otvet = one + two;
					cout << one << "+" << two << "=" << otvet << endl;
				}
				if (deystvee == "-")
				{
					otvet = one - two;
					cout << one << "-" << two << "=" << otvet << endl;
				}
				cout << "Хотите ли вы продолжить в этом режиме?(нажмите 1 для продолжения или 0 для выхода) ";
				cin >> repeat;
				mode = 1;
			}
		}
		if (mode == 2)
		{
			while (repeat == 1)
			{
				cout << "Введите основание степени: ";
				cin >> one;
				cout << "Введите показатель степени: ";
				cin >> two;
				otvet = pow(one, two);
				cout << one << " в степени " << two << " = " << otvet << endl;
				cout << "Хотите ли вы продолжить в этом режиме?(нажмите 1 для продолжения или 0 для выхода) ";
				cin >> repeat;
			}
		}
		if (mode == 3)
		{
			while (repeat == 1)
			{
				cout << "Введите число: ";
				cin >> one;
				otvet = sqrt(one);
				cout << "Квадратный корень из числа " << one << " = " << otvet << endl;
				cout << "Хотите ли вы продолжить в этом режиме?(нажмите 1 для продолжения или 0 для выхода) ";
				cin >> repeat;
			}
		}
		if (mode == 4)
		{
			while (repeat == 1)
			{
				cout << "Введите число: ";
				cin >> one;
				otvet = cbrt(one);
				cout << "Кубический корень из числа " << one << " = " << otvet << endl;
				cout << "Хотите ли вы продолжить в этом режиме?(нажмите 1 для продолжения или 0 для выхода) ";
				cin >> repeat;
			}
		}
		if (mode == 5)
		{
			while (repeat == 1)
			{
				int aa, bb, cc, D, x, xx;
				cout << "Введите a: ";
				cin >> aa;
				cout << "Введите b: ";
				cin >> bb;
				cout << "Введите c: ";
				cin >> cc;
				D = pow(bb, 2);
				D = D - 4 * aa * cc;
				if (D > 0)
				{
					x = (-bb + sqrt(D)) / (2 * aa);
					xx = (-bb - sqrt(D)) / (2 * aa);
					cout << "D=" << D << endl;
					cout << "X1=" << x << endl;
					cout << "X2=" << xx << endl;
				}
				else
					cout << "Так как D<0 уравнение не имеет корней" << endl;
				cout << "Хотите ли вы продолжить в этом режиме?(нажмите 1 для продолжения или 0 для выхода) ";
				cin >> repeat;
			}
		}
		if (mode == 6)
		{
			exit(0);
		}

		}
	};
