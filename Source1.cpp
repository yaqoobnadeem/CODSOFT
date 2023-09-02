/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/

#include<iostream>
using namespace std;

int random();
int guss();
int check(int &randd , int &gess);

int main()
{
	cout << "	|*****************************|"<<endl;
	cout << "	|Welcome to the Guessing Game!|" << std::endl;
	cout << "	|*****************************|" << endl;
	int randd , gess;
	randd = random();
	cout << endl << endl;

	do
	{
		gess = guss();
		check(randd, gess);
	} while (randd != gess);

	cout << "	Your Guess is 100% Correct		= " << gess<<endl;
	cout << "	__________________________________________";

	system("pause");
	return 0;
}

int random()
{
	int ran;
	ran = rand() % 100;
	return ran;
}

int guss()
{
	int guss;
	cout << endl;
	cout << "	 Guess The Number	= ";
	cin >> guss;
	cout << endl;
	return guss;
}

int check(int &randd, int &gess)
{
	
	if (randd  < gess)
	{
		cout << endl;
		cout << "	Your Guess is too High		= " << gess;

	}
	else if (randd  > gess)
	{
		cout << endl;
		cout << "	Your Guess is too LOw		= " << gess;
	}
	return 0;
}