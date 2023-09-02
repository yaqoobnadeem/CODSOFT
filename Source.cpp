/*Develop a program that counts the number of words in a given
text file. Prompt the user to enter the file name and display the
total word count.*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char file[20];
	char word[20];
	int count = 0;
	cout << "Enter file name With Extension [ .txt ]	= ";
	cin >> file;
	ifstream fin(file);

	if (fin)
	{

		while (fin.eof() == 0)
		{
			fin >> word;
			count++;
		}

		cout << "Total number of words	= " << count << endl;
	}
	else if (!fin)
	{
		cout << "Not find";
	}

	system("pause");
	return 0;
}