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
	for (size_t i = 0; i < col; i++)
	{
		for (size_t j = 0; j < row; j++)
		{
			if (i <= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;
}