#include <iostream>
using namespace std;
void main()
#define NEXT cout << endl;
{
	setlocale(LC_ALL, "Russian");
	const int a = 10;
	int left, x;
	int array[a] = { 0,	1,	1,	2,	3,	5,	8,	13,	21,	34 };
	cout << "¬ведите число сдвигов: "; cin >> left;
	for (int i = 0; i < left + 1; i++) {
		for (int j = 0; j < a; j++) {
			cout << array[j] << "\t";
			if (j == 0) { x = array[j]; }
			if (j!=a-1){ array[j] = array[j + 1]; 
			}
			else array[j] = x;

		} NEXT
	}

}