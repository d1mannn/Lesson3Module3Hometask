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
	cout << "������� ����� ������� �� 1 �� 7 -  ";
	int task;
	cin >> task;
	switch (task)
	{

#pragma region TASK1
		case 1:
		{
			cout << "������������ ������ ��� �����. ����������, ����� �� ��� �����, � ���� ���, ������� �� �� ����� � ������� �����������.";
			int a, b;
			cout << "\n������� ������ ����� - ";
			cin >> a;
			cout << "\n������� ������ ����� - ";
			cin >> b;
			if (a == b)
			{
				cout << "\n����� " << a << " ����� ����� " << b << endl;
			}
			else if (a > b)
			{
				cout << "\n����� " << b << " ������ ����� " << a << endl;
			}
			else
			{
				cout << "\n����� " << a << " ������ ����� " << b << endl;
			}
		} break;
#pragma endregion

#pragma region TASK2

		case 2:
		{	
			task2:
			cout << "������������ � ���������� ������ 5 ������ ��������.\n";
			cout << "����������, ������� �� ������� � ��������. ������� �������� ������, \n";
			cout << "���� ��� ������� ���� 4 ����� � ����\n";

			float a, b, c, d, e;
			cout << "������� ������ ������ �������� � ��������� �� 1 �� 5 - ";
			cin >> a;
			cout << "\n������� ������ ������ �������� � ��������� �� 1 �� 5 - ";
			cin >> b;
			cout << "\n������� ������ ������ �������� � ��������� �� 1 �� 5 - ";
			cin >> c;
			cout << "\n������� ��������� ������ �������� � ��������� �� 1 �� 5 - ";
			cin >> d;
			cout << "\n������� ����� ������ �������� � ��������� �� 1 �� 5 - ";
			cin >> e;
			float res = (a + b + c + d + e) / 5;

			if ((a >= 0 && a <= 5) && (b >= 0 && b <= 5) && (c >= 0 && c <= 5) && (d >= 0 && d <= 5) && (e >= 0 && e <= 5))
			{
				if (res >= 4)
				{
					cout << "������ �������!!! �.�. ������� ���� ���� ��� ����� 4 - " << res << endl;
				}
				else
				{
					cout << "������ �� �������!!! �.�. ������� ���� ������ 4 - " << res << endl;
				}
			}
			else
			{
				cout << "������� �������� ������!! \n���������� ��� ���!!";
				goto task2;
			}
		} break;
#pragma endregion

#pragma region TASK3

		case 3:
		{
			// 3� � 2� ������� ��������� ����������!!!

			task3:
			cout << "������������ � ���������� ������ 5 ������ ��������.\n";
			cout << "����������, ������� �� ������� � ��������. ������� �������� ������, \n";
			cout << "���� ��� ������� ���� 4 ����� � ����\n";

			float a, b, c, d, e;
			cout << "������� ������ ������ �������� � ��������� �� 1 �� 5 - ";
			cin >> a;
			cout << "\n������� ������ ������ �������� � ��������� �� 1 �� 5 - ";
			cin >> b;
			cout << "\n������� ������ ������ �������� � ��������� �� 1 �� 5 - ";
			cin >> c;
			cout << "\n������� ��������� ������ �������� � ��������� �� 1 �� 5 - ";
			cin >> d;
			cout << "\n������� ����� ������ �������� � ��������� �� 1 �� 5 - ";
			cin >> e;
			float res = (a + b + c + d + e) / 5;

			if ((a >= 0 && a <= 5) && (b >= 0 && b <= 5) && (c >= 0 && c <= 5) && (d >= 0 && d <= 5) && (e >= 0 && e <= 5))
			{
				if (res >= 4)
				{
					cout << "������ �������!!! �.�. ������� ���� ���� ��� ����� 4 - " << res << endl;
				}
				else
				{
					cout << "������ �� �������!!! �.�. ������� ���� ������ 4 - " << res << endl;
				}
			}
			else
			{
				cout << "������� �������� ������!! \n���������� ��� ���!!";
				goto task2;
			}

		} break;

#pragma endregion

#pragma region TASK4

		case 4:
		{

			task4:
			cout << "�������� ���������-�����������. ������������ ������ ��� ����� \n";
			cout << "� �������� �������������� ��������. ������� �� ����� ���������\n";
			float a, b;
			char act = 0;
			cout << "������� ������ ����� - ";
			cin >> a;
			cout << "\n������� ������ �����, �� ������ ���� - ";
			cin >> b;
			cout << "������� �������� ��������� ������� + - / * � ���������� �������:  ";
			cin >> act;
			if (b != 0)
			{
				if (act == '+')
				{
					cout << "����� ����� ����� " << a + b << endl;
				}
				else if (act == '-')
				{
					cout << "�������� ����� ����� " << a - b << endl;
				}
				else if (act == '/')
				{
					cout << "������� ����� � �� ����� b ����� " << a / b << endl;
				}
				else if (act == '*')
				{
					cout << "������������ ����� ����� " << a * b << endl;
				}
				else
				{
					cout << "������� ������������ �������!!!";
					goto task4;
				}
			}
			else
			{
				cout << "������� ������������ �����!!!";
				goto task4;
			}
			
		} break;
#pragma endregion

#pragma region TASK5

		case 5:
		{	
			task5:
			cout << "�� ������ ������ ���� ������� ����� �� ����������.\n ������� ����� �� 1 �� 255, ����� �������� ���� -  ";
			int color1;
			cin >> color1;
			if (color1 >= 1 && color1 <= 255)
			{	
				HANDLE hConsole;
				int color = color1;
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, color);
				cout << "���� ������� ���������\n";
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
			cout << "�������� ���������, ������� �� ������ ������������ �������� \n";
			cout << "��������� �� ����� � ������� �� ������� �� ������� ������������\n";
			double a, b;
			cout << "������� ����� ����� - ";
			cin >> a;
			cout << "\n� ����� ������� ����� ���������? - ";
			cin >> b;
			if (b >=1 && b <= 7)
			{
				cout << "����� " << a << " � ������� " << b << " = " << pow(a, b) << endl;
			}
			else
			{
				cout << "������� ������������ �����!!!";
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