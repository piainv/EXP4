#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	
int size, text[1000], x, y, w;

cout << "Enter array size: "; 
cin >> size;

cout << "Enter your desired elements: " << endl;

	for (x = 0; x < size; x++)
		{
		cin >> text[x];
		}
	cout << "Data collected: ";
	for (x = 0; x < size; x++)
	{
	cout << text[x] << " ";
	}


	for (x = 0; x < size; x++)
	{
		for (y = x + 1; y < size ; y++)
		{
			if (text[x] > text[y])
			{
				w = text[y] ;
				text[y] = text[x];
				text[x] = w;
			}
		}
	}

	cout << "\nYour data selection sorted: ";

	for (x = 0; x < size; x++)
	{
		cout << text[x] << ", ";
	}

	_getch();
	return 0;
}
