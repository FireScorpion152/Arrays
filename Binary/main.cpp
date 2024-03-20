#include <iostream>
using namespace std;

#define NEXT cout << endl;


void main()
{
	setlocale(LC_ALL, "Russian");
	int delit, c = 0;
	
	double number, check;
	cout << "¬ведите число дл€ перевода: "; cin >> number;
	for (int j = 0; j < 8; j++) {
		check = pow(2, j);
		c++;
		if (check >= number) {
			break;
		}

	}
	
	for (int i = 0; i < c; i++, check/=2) {
		if (number / check >= 1 && number / check < 2) {
			cout << "1";
			number = number - check;
		}
		else if (number == 1) {
			cout << "1";
		}
		else if (number == 0) { cout << "0"; 
		}else cout << "0";


	}
}