/*
ЗАДАНИЕ 2
ВЫЧИСЛЕНИЕ СУММЫ, КОЛИЧЕСТВА, ПРОИЗВЕДЕНИЯ ЗНАЧЕНИЙ. СОЧЕТАНИЕ ЦИКЛОВ И РАЗВЕТВЛЕНИЙ.
*/

#include <iostream>
#include <math.h>

using namespace std;

class Task2 {

public:

	//a)
	static void Task_2a() {
		cout << "Задание 2.\n";
		cout << "а)\n";

		const float a = 2.7;
		float k, x, z;
		float sum = 0;

		for (k = 1; k < 3; k++) {
			for (x = 0.5; x < 3; x += 0.1) {
				z = (pow(x, k)) / k * k;
				if (z > a) {
					cout << z << "; " << "\n";
				}
				sum += z;
			}
		};
		cout << "cумма: " << sum << endl;
		cout << "\n";
	}


	//б)
	static void Task_2b() {
		cout << "б)\n";
		float a = 2, b = 3;
		float s, c, y;

		for (float x = 1.5; x <= 4.5; x += 0.5) {
			if (x > 2.5) {
				y = (log(x + a * x)) / b * x;
			}
			if (x == 2.5) {
				y = 0;
			}
			if (x < 2.5) {
				y = sqrt(pow(a * x, 3 / b));
			}
			c = ((x + y) * (x + y)) / 2;
			s = (y - c) / b;

			cout << "x = " << x << ", y = " << y << endl;
			cout << "c = " << c << "\t" << endl;
			cout << "s = " << s << "\t" << endl;
			cout << endl;
		}
	}

	//в)
	int f(int x) {
		int y = (4 * x) - 1;
		return y;
	};

	static void Task_2v() {
		cout << "в)\n";
		Task2 obj;
		cout << "Значения функции: " << endl;
		for (int i = 2; i <= 25; i++) {
			cout << " " << obj.f(i);
		}
		cout << endl << endl;
		cout << "Кратные 4-м значения функции:" << endl;
		for (int i = 2; i <= 25; i++) {
			if (obj.f(i) % 4 == 0) {
				cout << obj.f(i);
			}
			else cout << "Значение функции с индексом " << i - 1 << " не кратно 4-м." << endl;
		}

		int pr = 1;
		for (int i = 2; i <= 25; i++) {
			if (obj.f(i) % 4 == 0) {
				pr *= obj.f(i);
			}
			else pr = 0;
		}
		cout << "\n";
		cout << "Произведение значений функции, кратных 4-м: " << pr;
		cout << "\n";
		cout << "\n";
	}
};
