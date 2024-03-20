#include <iostream>
using namespace std;

#define NEXT cout << endl;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int a = 10;
	int left, right, x;
	int array[a] = { 0,	1,	1,	2,	3,	5,	8,	13,	21,	34 };
	//cout << "¬ведите число сдвигов влево: "; cin >> left;
	//for (int i = 0; i < left + 1; i++) {
	//	for (int j = 0; j < a; j++) {
	//		cout << array[j] << "\t";
	//		if (j == 0) { x = array[j]; }
	//		if (j != a - 1) {
	//			array[j] = array[j + 1];
	//		}
	//		else array[j] = x;

	//	} NEXT
	//}
	cout << "¬ведите число сдвигов вправо: "; cin >> right;
	for (int i = 0; i < right + 1; i++) {
		for (int j = 0; j < a; j++) {
			cout << array[j] << "\t";
			if (j == 0) { 
				x = array[a - 1];
				array[a-1] = array[a-2]; }
			else if (j < a) {
				x = array[a-(j+1)];
				array[a-(j+1)] = array[a - (j+2)];
			}
		} NEXT
	}
}