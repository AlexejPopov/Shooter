﻿#include<iostream>
#include<conio.h>
using namespace std;

#define Escape		27
#define Enter		13
#define UP_ARROW	72
#define DOWN_ARROW	80
#define LEFT_ARROW	75
#define RIGHT_ARROW	77

/* Функция _getch() ожидает нажатие клавиши и возвращает ASCII-код нажатой клавиши
cout << (int)key << "\t" << key << endl;
(int)key - явное преобразование переменной 'key' в тип данных 'char' */

void main()
{
	setlocale(LC_ALL, "");
	char key;
	do
	{
		key = _getch();	
		switch (key)
		{
		case 'w':case 'W':case UP_ARROW:	cout << "Вперед" << endl; break;
		case 's':case 'S':case DOWN_ARROW:	cout << "Назад" << endl;  break;
		case 'a':case 'A':case LEFT_ARROW:	cout << "Влево" << endl;  break;
		case 'd':case 'D':case RIGHT_ARROW:	cout << "Вправо" << endl; break;
		case ' ':cout << "Прыжок" << endl; break;
		case Enter: cout << "Огонь!" << endl; break;
		case Escape: cout << "Выход" << endl;
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
}