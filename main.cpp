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
	int numb;

    if (d1 > d2) {
        cout << "start of  the diapasone is bigger is larger than the end" << endl;
        return 0;
        system("pause");
    }

    while (true) {
        cout << "enter number ";
        cin >> numb;

        if (numb >= d1 && numb  <= d2) {
            cout << "your number in diapasone" << endl;
            break;
        }
        else {
            cout << "your number are not in diapasone" << endl;
        }
    }
	return 0;
	system("pause");
}