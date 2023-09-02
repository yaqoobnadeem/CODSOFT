/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/

#include<iostream>
using namespace std;
void entry(int& num1, int& num2);
void Addition(int num1, int num2);
void Subtraction(int num1, int num2);
void Multiplaction(int num1, int num2);
void Division(int num1, int num2);

int main()
{
	system("cls");
	int num1 = 0, num2 = 0;
	int num;
	do
	{
		cout << "	|****************************************|" << endl;
		cout << "	|             CALCULATOR                 |" << endl;
		cout << "	|****************************************|" << endl;

		cout << endl << endl << endl;

		cout << "	For Addition of two Numbers			Press = 1" << endl;
		cout << "	For Subtraction of two Numbers			Press = 2" << endl;
		cout << "	For Multiplaction of two Numbers		Press = 3" << endl;
		cout << "	For Division of two Numbers			Press = 4" << endl;
		cout << "	___________________________________________________________" << endl;
		cout << "	___________________________________________________________" << endl;

		cout << endl << endl << endl;

		cout << "	Ente Your Choice		= ";
		cin >> num;


		if (num == 1)
		{
			Addition(num1, num2);
		}
		else if (num == 2)
		{
			Subtraction(num1, num2);
		}
		else if (num == 3)
		{
			Multiplaction(num1, num2);
		}
		else if (num == 4)
		{
			Division(num1, num2);
		}
		else if (num == 5)
		{
			return 0;
		}

	} while (num < 5);


	system("pasue");
	return 0;
}

void entry(int& num1, int& num2)
{
	cout << endl << endl;
	cout << "	Enter Your First Number		= ";
	cin >> num1;
	cout << endl << endl;
	cout << "	Enter Your Second Number	= ";
	cin >> num2;
}
void Addition(int num1, int num2)
{
	system("cls");
	int num;
	cout << "	 ****************************************" << endl;
	cout << "	|          FUNCTION ADDITION             |" << endl;
	cout << "	 ****************************************" << endl;
	entry(num1, num2);
	num = num1 + num2;
	cout << "	Addioton is Performed " << endl << endl;
	cout << "	_____________________________________" << endl << endl;
	cout << "	Your Answer is			= " << num << endl << endl;
	cout << "	_____________________________________" << endl << endl;
}
void Subtraction(int num1, int num2)
{
	system("cls");
	cout << "	 ****************************************" << endl;
	cout << "	|        FUNCTION SUBTRACTION            |" << endl;
	cout << "	 ****************************************" << endl;


	entry(num1, num2);
	int num;
	num = num1 - num2;
	cout << "	Subtraction is Performed " << endl << endl;
	cout << "	_____________________________________" << endl << endl;
	cout << "	Your Answer is			= " << num << endl << endl;
	cout << "	_____________________________________" << endl << endl;
}
void Multiplaction(int num1, int num2)
{
	system("cls");
	cout << "	 ****************************************" << endl;
	cout << "	|        FUNCTION MULTIPLICATION         |" << endl;
	cout << "	 ****************************************" << endl;

	entry(num1, num2);
	int num;
	num = num1 * num2;
	cout << "	Multiplication is Performed " << endl << endl;
	cout << "	_____________________________________" << endl << endl;
	cout << "	Your Answer is			= " << num << endl << endl;
	cout << "	_____________________________________" << endl << endl;
}

void Division(int num1, int num2)
{
	system("cls");
	cout << "	 ****************************************" << endl;
	cout << "	|          FUNCTION DIVISION             |" << endl;
	cout << "	 ****************************************" << endl;

	entry(num1, num2);

	if (num2 != 0)
	{
		double num;
		num = (num1)*1.0 / num2;
		cout << "    Division is Performed" << endl;
		cout << "	_____________________________________" << endl << endl;
		cout << "	Your Answer is			= " << num << endl << endl;
		cout << "	_____________________________________" << endl << endl;
	}
	else
	{
		cout << endl;
		cout << "    Can't Divide By Zero. [ M A T H....E R R O R ]" << endl;
		cout << "	_____________________________________" << endl << endl;
	}
}