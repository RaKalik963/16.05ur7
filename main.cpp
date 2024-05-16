#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j >= 4 && i >= j || i + j <= 4 && i <= j)
			{ 
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}