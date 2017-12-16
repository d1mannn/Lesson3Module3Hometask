#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>
#include <Windows.h>

using namespace std;

int main()
{	
	MyStart:
	setlocale(LC_ALL, "Rus");
	cout << "Введите номер задания от 1 до 7 -  ";
	int task;
	cin >> task;
	switch (task)
	{

#pragma region TASK1
		case 1:
		{
			cout << "Пользователь вводит два числа. Определить, равны ли эти числа, и если нет, вывести их на экран в порядке возрастания.";
			int a, b;
			cout << "\nВведите первое число - ";
			cin >> a;
			cout << "\nВведите второе число - ";
			cin >> b;
			if (a == b)
			{
				cout << "\nЧисло " << a << " равно числу " << b << endl;
			}
			else if (a > b)
			{
				cout << "\nЧисло " << b << " меньше числа " << a << endl;
			}
			else
			{
				cout << "\nЧисло " << a << " меньше числа " << b << endl;
			}
		} break;
#pragma endregion

#pragma region TASK2

		case 2:
		{	
			task2:
			cout << "Пользователь с клавиатуры вводит 5 оценок студента.\n";
			cout << "Определить, допущен ли студент к экзамену. Студент получает допуск, \n";
			cout << "если его средний балл 4 балла и выше\n";

			float a, b, c, d, e;
			cout << "Введите первую оценку студента в диапозоне от 1 до 5 - ";
			cin >> a;
			cout << "\nВведите вторую оценку студента в диапозоне от 1 до 5 - ";
			cin >> b;
			cout << "\nВведите третью оценку студента в диапозоне от 1 до 5 - ";
			cin >> c;
			cout << "\nВведите четвертую оценку студента в диапозоне от 1 до 5 - ";
			cin >> d;
			cout << "\nВведите пятую оценку студента в диапозоне от 1 до 5 - ";
			cin >> e;
			float res = (a + b + c + d + e) / 5;

			if ((a >= 0 && a <= 5) && (b >= 0 && b <= 5) && (c >= 0 && c <= 5) && (d >= 0 && d <= 5) && (e >= 0 && e <= 5))
			{
				if (res >= 4)
				{
					cout << "Допуск получен!!! т.к. Средний балл выше или равен 4 - " << res << endl;
				}
				else
				{
					cout << "Допуск не получен!!! т.к. Средний балл меньше 4 - " << res << endl;
				}
			}
			else
			{
				cout << "Введены неверные данные!! \nПопробуйте ещё раз!!";
				goto task2;
			}
		} break;
#pragma endregion

#pragma region TASK3

		case 3:
		{
			// 3е и 2е задание абсолютно одинаковые!!!

			task3:
			cout << "Пользователь с клавиатуры вводит 5 оценок студента.\n";
			cout << "Определить, допущен ли студент к экзамену. Студент получает допуск, \n";
			cout << "если его средний балл 4 балла и выше\n";

			float a, b, c, d, e;
			cout << "Введите первую оценку студента в диапозоне от 1 до 5 - ";
			cin >> a;
			cout << "\nВведите вторую оценку студента в диапозоне от 1 до 5 - ";
			cin >> b;
			cout << "\nВведите третью оценку студента в диапозоне от 1 до 5 - ";
			cin >> c;
			cout << "\nВведите четвертую оценку студента в диапозоне от 1 до 5 - ";
			cin >> d;
			cout << "\nВведите пятую оценку студента в диапозоне от 1 до 5 - ";
			cin >> e;
			float res = (a + b + c + d + e) / 5;

			if ((a >= 0 && a <= 5) && (b >= 0 && b <= 5) && (c >= 0 && c <= 5) && (d >= 0 && d <= 5) && (e >= 0 && e <= 5))
			{
				if (res >= 4)
				{
					cout << "Допуск получен!!! т.к. Средний балл выше или равен 4 - " << res << endl;
				}
				else
				{
					cout << "Допуск не получен!!! т.к. Средний балл меньше 4 - " << res << endl;
				}
			}
			else
			{
				cout << "Введены неверные данные!! \nПопробуйте ещё раз!!";
				goto task2;
			}

		} break;

#pragma endregion

#pragma region TASK4

		case 4:
		{

			task4:
			cout << "Написать программу-калькулятор. Пользователь вводит два числа \n";
			cout << "и выбирает арифметическое действие. Вывести на экран результат\n";
			float a, b;
			char act = 0;
			cout << "Введите первое число - ";
			cin >> a;
			cout << "\nВведите второе число, не равное нулю - ";
			cin >> b;
			cout << "Ввдеите действие используя символы + - / * с введенными цифрами:  ";
			cin >> act;
			if (b != 0)
			{
				if (act == '+')
				{
					cout << "Сумма чисел равна " << a + b << endl;
				}
				else if (act == '-')
				{
					cout << "Разность чисел равна " << a - b << endl;
				}
				else if (act == '/')
				{
					cout << "Деление числа а на число b равно " << a / b << endl;
				}
				else if (act == '*')
				{
					cout << "Произведение чисел равно " << a * b << endl;
				}
				else
				{
					cout << "Введены недопустимые символы!!!";
					goto task4;
				}
			}
			else
			{
				cout << "Введены недопустимые числа!!!";
				goto task4;
			}
			
		} break;
#pragma endregion

#pragma region TASK5

		case 5:
		{	
			task5:
			cout << "На данный момент цвет консоли белый по умполчанию.\n Введите число от 1 до 255, чтобы изменить цвет -  ";
			int color1;
			cin >> color1;
			if (color1 >= 1 && color1 <= 255)
			{	
				HANDLE hConsole;
				int color = color1;
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, color);
				cout << "Цвет консоли поменялся\n";
				goto MyStart;
				
			}
			else
			{
				goto task5;
			}

		} break;
#pragma endregion

#pragma region TASK6
		
		case 6:
		{	
			task6:
			cout << "Написать программу, которая по выбору пользователя возводит \n";
			cout << "введенное им число в степень от нулевой до седьмой включительно\n";
			double a, b;
			cout << "Введите любое число - ";
			cin >> a;
			cout << "\nВ какую степень будем возводить? - ";
			cin >> b;
			if (b >=1 && b <= 7)
			{
				cout << "Число " << a << " в степени " << b << " = " << pow(a, b) << endl;
			}
			else
			{
				cout << "Введены недопустимые числа!!!";
				goto task6;
			}
		} break;
#pragma endregion

#pragma region TASK7

		case 7:
		{

			cout << "";
		} break;
#pragma endregion



	default:
		break;
	}


	system("pause");
}