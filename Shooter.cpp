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
		cout << R"(                            Добро пожаловать в игру, мой друг!
                             Ниже приведены действия в игре:

					w - Вперед
					s - Нназад
					a - Влево
					d - Вправо
				   Space  - Прыжок
				   Enter  - Огонь
				   Escape - Выход из игры

					)";
		cout << "				   Введите команду: "; X = _getch();//cin >> X;
		if (X == 'W' || X == 'w' || X == 'S' || X == 's' || X == 'A' || X == 'a' || X == 'd' || X == 'D' || X == ' ' || X == 27)
			break;
		else
		{
			cout << "\n			Введено неверное действие. Повторите ввод!" << endl;
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
			cout << "				   Воин идет вперед!" << endl;
			break;
		case 's':
		case 'S':
			cout << "				   Воин идет назад!" << endl;
			break;
		case 'a':
		case 'A':
			cout << "				   Воин идет влево!" << endl;
			break;
		case 'd':
		case 'D':
			cout << "				   Воин идет вправо!" << endl;
			break;
		case ' ':
			cout << "				   Воин прыгает!" << endl;
			break;

		default:
			cout << "				     Изыди демон!" << endl;
			break;
		}
		cout << "				   Введите команду: "; X = _getch();//cin >> X;
	} while (X != 27);
}

