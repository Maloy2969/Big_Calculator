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
		cout << "�������� �����:" << endl;
		cout << "1-�����������" << endl;
		cout << "2-���������� � ������� " << endl;
		cout << "3-���������� ����������� �����" << endl;
		cout << "4-���������� ����������� �����" << endl;
		cout << "5-������� ���������� ���������" << endl;
		cout << "6-��� �������� ����������" << endl;
		cin >> mode;
		if (mode == 1)
		{
			while (repeat == 1)
			{
				cout << "������� 1-�� �����: ";
				cin >> one;
				cout << "������� 2-�� �����: ";
				cin >> two;
				cout << "������� ���� �������� (/,*,+,-) :  ";
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
				cout << "������ �� �� ���������� � ���� ������?(������� 1 ��� ����������� ��� 0 ��� ������) ";
				cin >> repeat;
				mode = 1;
			}
		}
		if (mode == 2)
		{
			while (repeat == 1)
			{
				cout << "������� ��������� �������: ";
				cin >> one;
				cout << "������� ���������� �������: ";
				cin >> two;
				otvet = pow(one, two);
				cout << one << " � ������� " << two << " = " << otvet << endl;
				cout << "������ �� �� ���������� � ���� ������?(������� 1 ��� ����������� ��� 0 ��� ������) ";
				cin >> repeat;
			}
		}
		if (mode == 3)
		{
			while (repeat == 1)
			{
				cout << "������� �����: ";
				cin >> one;
				otvet = sqrt(one);
				cout << "���������� ������ �� ����� " << one << " = " << otvet << endl;
				cout << "������ �� �� ���������� � ���� ������?(������� 1 ��� ����������� ��� 0 ��� ������) ";
				cin >> repeat;
			}
		}
		if (mode == 4)
		{
			while (repeat == 1)
			{
				cout << "������� �����: ";
				cin >> one;
				otvet = cbrt(one);
				cout << "���������� ������ �� ����� " << one << " = " << otvet << endl;
				cout << "������ �� �� ���������� � ���� ������?(������� 1 ��� ����������� ��� 0 ��� ������) ";
				cin >> repeat;
			}
		}
		if (mode == 5)
		{
			while (repeat == 1)
			{
				int aa, bb, cc, D, x, xx;
				cout << "������� a: ";
				cin >> aa;
				cout << "������� b: ";
				cin >> bb;
				cout << "������� c: ";
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
					cout << "��� ��� D<0 ��������� �� ����� ������" << endl;
				cout << "������ �� �� ���������� � ���� ������?(������� 1 ��� ����������� ��� 0 ��� ������) ";
				cin >> repeat;
			}
		}
		if (mode == 6)
		{
			exit(0);
		}

		}
	};
