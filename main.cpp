#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "enter start of diapasone";
	int d1;
	cin >> d1;
	cout << "enter end of diapasone";
	int d2;
	cin >> d2;
	cout << "enter num";
	int numb;
	cin >> numb;

	for (;numb <= d2 && numb >= d1;)
	{
		if (numb > d2 || numb < d1)
		{
			cout << "no" << endl;
			cout << "enter num";
			cin >> numb;
		}
		if (numb <= d2 && numb >= d1)
		{
			cout << "yes" << endl;
			return 0;
		}
	}
	return 0;
	//system("pause");
}