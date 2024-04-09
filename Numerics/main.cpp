#include <iostream>
using namespace std;

#define NEXT cout << endl;
//#define DEC_2_BIN
//#define DEC_2_HEX
#define DEC_3_HEX

void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
#ifdef DEC_2_BIN
	const int MAX_CAPACITY = 32;
	bool binary[MAX_CAPACITY]{};

	int i = 0;
	for (; decimal; decimal /= 2) {
		binary[i++] = decimal % 2;
	}
	for (--i; i >= 0; i++) {
		cout << binary[i];
	}
	NEXT
#endif // DEC_2_BIN

#ifdef DEC_2_HEX
	const int MAX_HEX_CAPACITY = 8;
	char hex[MAX_HEX_CAPACITY] = {};
	int i = 0;
	for (; decimal; i++) {
		hex[i] = decimal % 16;
		decimal /= 16;
	}
	for (--i; i >= 0; i--) {
		if (hex[i] < 10) {
			cout << (int)hex[i];
		}
		else cout << char(hex[i] + 55);
	}
	NEXT
#endif // DEC_2_HEX

#ifdef DEC_3_HEX
	const int MAX_HEX_CAPACITY = 8;
	char hex[MAX_HEX_CAPACITY] = {};
	int i = 0;
	for (; decimal; decimal /=16) {
		hex[i++] = decimal % 16;
	}
	for (--i; i >= 0; i--) {
		cout << char(hex[i] < 10 ? hex[i] + '0' : hex[i] + 'A' - 10);
	}
	NEXT
#endif // DEC_3_HEX

}