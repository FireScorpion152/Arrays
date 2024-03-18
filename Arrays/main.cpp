#include <iostream>
using namespace std;
void main()
#define NEXT cout << endl;
{
	setlocale(LC_ALL, "Russian");
	const int a = 2;
	const int b = 2;
	double sum = 0, count = 0;
	int array[a][b], min, max;
	double avg;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << "Введите элемент массива array[" << i << "][" << j << "]" << endl;
			cin >> array[i][j];
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << array[i][j] << "\t";
		}
		NEXT
	}NEXT

		for (int j = a - 1; j >= 0; j--) {
			for (int i = b - 1; i >= 0; i--) {
				cout << array[j][i] << "\t";
			}
			NEXT
		}NEXT

			for (int i = 0; i < a; i++) {
				for (int j = 0; j < b; j++) {
					if (i == 0 && j == 0) {
						min = array[i][j];
						max = array[i][j];
					}
					if (array[i][j] < min) { min = array[i][j]; }
					if (array[i][j] > max) { max = array[i][j]; }
					sum += array[i][j];
					count++;
				}
			}
			cout << "Сумма равна: " << sum << endl;
			cout << "Среднее арифметическое: " << sum / count << endl;
			cout << "Минимальное число: " << min << "\t Максимальное число: " << max << endl;
			NEXT

}