#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "enter column";
	int col;
	cin >> col;
	cout << "enter row";
	int row;
	cin >> row;
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (i + j >= col - 2 && i >= j )
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