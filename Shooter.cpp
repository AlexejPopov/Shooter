#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
	cout << "-----------------------------------------Shooter!-----------------------------------------\n" << endl;
	char X = '+';
	do
	{
		system("cls");
		cout << R"(                            ����� ���������� � ����, ��� ����!
                             ���� ��������� �������� � ����:

					w - ������
					s - ������
					a - �����
					d - ������
				   Space  - ������
				   Enter  - �����
				   Escape - ����� �� ����

					)";
		cout << "				   ������� �������: "; X = _getch();//cin >> X;
		if (X == 'W' || X == 'w' || X == 'S' || X == 's' || X == 'A' || X == 'a' || X == 'd' || X == 'D' || X == ' ' || X == 27)
			break;
		else
		{
			cout << "\n			������� �������� ��������. ��������� ����!" << endl;
			Sleep(2000);
		}
	} while (true);
	do
	{
		Sleep(500);
		system("cls");
		switch (X)
		{
		case 'w':case 'w':case 'w':case 'w':case 'w':case 'w':case 'w':case 'w':
		case 'W':case 'w':case 'W':case 'W':case 'W':case 'W':case 'W':case 'W':
			cout << "				   ���� ���� ������!" << endl;
			break;
		case 's':
		case 'S':
			cout << "				   ���� ���� �����!" << endl;
			break;
		case 'a':
		case 'A':
			cout << "				   ���� ���� �����!" << endl;
			break;
		case 'd':
		case 'D':
			cout << "				   ���� ���� ������!" << endl;
			break;
		case ' ':
			cout << "				   ���� �������!" << endl;
			break;

		default:
			cout << "				     ����� �����!" << endl;
			break;
		}
		cout << "				   ������� �������: "; X = _getch();//cin >> X;
	} while (X != 27);
}

