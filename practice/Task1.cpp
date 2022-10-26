
/*
ЗАДАНИЕ 1
ВЫЧИСЛЕНИЯ ПО ФОРМУЛАМ. РАЗВЕТВЛЕНИЯ. ЦИКЛЫ.
*/

#include <iostream>
#include <math.h>

using namespace std;

class Task1 {

public:

	//a)
	static void Task_1a() {
		cout << "Задание 1.\n";
		cout << "а)\n";
		float a = 0.13;
		float b = 0.8;
		float c = 5.2;

		float p = (a + b + c) / 2;
		cout << "p = " << p << endl;

		float S = sqrt(abs((p * p) - c + (sin(log(p)) * sin(log(p)) * sin(log(p)))));
		cout << "S = " << S << endl;
		cout << "\n";
	}

	//б)
	static void Task_1b() {
		cout << "б)\n";
		const float e = 2.71;

		float z1;
		float x1 = 3;
		if (x1 > 0) {
			z1 = 1;
		}
		else {
			z1 = x1 * x1;
		}
		float y1 = pow(e, z1) + 3.5 - (cos(x1 * z1) * cos(x1 * z1) * cos(x1 * z1));
		cout << "y при х = 3 равен: " << y1;
		cout << endl;

		float z2;
		float x2 = 5.2;
		if (x2 > 0) {
			z2 = 1;
		}
		else {
			z2 = x2 * x2;
		}
		float y2 = pow(e, z2) + 3.5 - (cos(x2 * z2) * cos(x2 * z2) * cos(x2 * z2));
		cout << "y при х = 5.2 равен: " << y2 << endl;
		cout << "\n";
	}

	//в)
	static void Task_1v() {
		cout << "в)\n";
		const float e = 2.71;
		float a, b, d, t, y;

		for (t = -3.2; t <= 4.5; t += 0.9) {
			a = 0.5 * t * t * t - sin(t);
			d = 13 * (pow(e, t));
			b = 1.5 * t - abs(pow(t, 1 / 3));
			if (t > -0.5) {
				y = 3 * sin(t) + atan(t);
			}
			else if (t == -0.5) {
				y = (2 * t - pow(e, t)) / d;
			}
			else if (t < -0.5) {
				y = b * sqrt(abs(cos(t) + a));
			}
			cout << "y = " << y << ", t = " << t << endl;
		}
		cout << "\n";
	}
};