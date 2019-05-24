#include <iostream>
#include <conio.h>
using namespace std;

int addition (int num1, int num2)
{
	int total;
	total = num1 + num2;
	return total;
}
int subtraction (int num1, int num2)
{
	int total;
	total = num1 - num2;
	return total;
}
int multiplication (int num1, int num2)
{
	int total;
	total = num1*num2;
	return total;
}
int division (int num1, int num2)
{
	int total;
	total = num1/num2;
	return total;
}
int mod (int num1, int num2)
{
	int total;
	total = num1 % num2;
	return total;
}
int main ()
{
	int op, no1, no2, eq;
	
	char cont = 'y';
	do
	{
	cout << "Menu:" << endl;
	cout << "     " << "1 - Addition." << endl;
	cout << "     " << "2 - Subtraction." << endl;
	cout << "     " << "3 - Multiplication." << endl;
	cout << "     " << "4 - Division." << endl;
	cout << "     " << "5 - Modulus." << endl;
	cout << "Input indicated number to perform operation:" << " ";
	cin >> op;
	cout << "Input two integers needed for operation:" << endl;
	cout << "1st number:" << " ";
	cin >> no1;
	cout << "2nd number:" << " ";
	cin >> no2;

	switch (op)
	{
		case 1:
			eq = addition (no1, no2);
			cout << "Result:" << " " << eq << endl; 
			break;
		case 2:
			eq = subtraction (no1, no2);
			cout << "Result:" << " " << eq << endl; 
			break;
		case 3:
			eq = multiplication (no1, no2);
			cout << "Result:" << " " << eq << endl; 
			break;
		case 4:
			eq = division (no1, no2);
			cout << "Result:" << " " << eq << endl; 
			break;
		case 5:
			eq = mod (no1, no2);
			cout << "Result:" << " " << eq << endl; 
			break;
		default:
			cout << "Invalid! Try Again." << endl;
	}
	
	cout << "Continue to new operation? \n" << "y- yes n- exit:" << " ";
	cin >> cont;
		switch (cont)
	{
		case 'y':
			break;
		case 'n':
			cout << "\n" << "Thank you! Bye.";
			return 0;
			break;
		default:
			cout << "\n" "Please type y or n only.";
			break;	
	}

	} while (cont == 'y');

	
	_getch();
	return 0;
}


