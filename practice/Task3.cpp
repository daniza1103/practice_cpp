
/*
ЗАДАНИЕ 3
ОБРАБОТКА ОДНОМЕРНЫХ МАССИВОВ.
*/

#include <iostream>
#include <math.h>

using namespace std;

class Task3 {

public:

	//a)
	static void Task_3a() {
		cout << "Задание 3.\n";
		cout << "а)\n";

		int K = 0;
		int A[] = { 4, 5, 6, 7, 8, 9, 1, 2 };
		cout << "A[8] =";
		for (int i = 0; i < 8; i++) {
			cout << " " << A[i];
		}
		for (int i = 0; i < 8; i++) {
			if (A[i] > 3) K++;
		}
		cout << "\n";
		cout << "Количество элементов K > 3 = " << K << endl;

		int M = 1;
		int B[] = { 1, 3, 4, 7, 8, 5, 9, 0, 12 };
		cout << "B[9] =";
		for (int i = 0; i < 9; i++) {
			cout << " " << B[i];
		}
		for (int i = 0; i < 9; i++) {
			if (B[i] > M) M = B[i];
		}
		cout << "\n";
		cout << "Максимальный элемент M = " << M << endl;

		int N = 1;
		int C[] = { 3, 6, 9, 10, 1, 2, 4 };
		cout << "C[7] =";
		for (int i = 0; i < 7; i++) {
			cout << " " << C[i];
		}
		for (int i = 0; i < 7; i++) {
			if (C[i] < N) N = C[i];
		}
		cout << "\n";
		cout << "Минимальный элемент N = " << N << endl;
		cout << "\n";
		cout << "Что больше: K, M или N? Ответ: ";
		if (K > M) {
			cout << "K = " << K;
		}
		else if (M > N) {
			cout << "M = " << M;
		}
		else if (N > K) {
			cout << " N = " << N;
		}
		cout << "\n";
		cout << "\n";
	}

	//б)
	static void Task_3b() {
		cout << "б)\n";

		int i, j;
		cout << "Массив Х: ";
		float X[] = { 2.6, 0.04, 8.31, 5.2, 0.2, 0.78, 1.4, 5.9, 2.7 };
		for (i = 0; i < 9; i++) {
			cout << X[i] << "  ";
		}

		float Y[9];
		int k = 0;
		cout << endl;

		cout << "Массив Y: ";
		for (i = 0; i < 9; i++) {
			Y[i] = log(fabs(X[i] - 1.3 * sin(X[i])));
			cout << "  " << Y[i];
		}
		for (j = 0; j < 9; j++) {
			if (Y[j] <= 2 && Y[j] >= 1)
				k++;
		}
		cout << endl;
		cout << "Kоличество элементов массива Y, удовлетворяющих условию 1 <= Yi <= 2 равно: " << k << ".";

		float sum = 0, pr = 1;
		for (j = 0; j < 9; j++) {
			if ((Y[j] < 2 && Y[j] < 1) && (j % 2 == 0)) {
				sum += Y[j];
			}
			if ((Y[j] < 2 && Y[j] < 1) && (j % 2 != 0)) {
				pr *= Y[j];
			}
		}
		cout << endl;
		cout << "Сумма элементов массива с четными индексами равна: " << sum << endl;
		cout << "Произведение элементов массива с нечетными индексами равно: " << pr;
		cout << "\n";
		cout << "\n";
	}

	//в)
	static void Task_3v() {
		cout << "в)\n";

		const int n = 15;
		cout << "D[] =";
		int D[] = { 7, 2, 1, 7, 0, 4, 5, 2, 1, 4, 0, 8, 9, 7, 6 };
		for (int i = 0; i < n; i++) {
			cout << " " << D[i];
		}
		cout << endl;

		int globalCount = 0;
		for (int i = 0; i < n - 1; i++) {
			int  localCount = 0;
			for (int k = i + 1; k < n; k++) {
				if (D[i] == D[k]) {
					localCount++;
				}
			}
			if (localCount == 1) {
				globalCount++;
			}
		}
		cout << "Количество элементов, которые входят в массив более чем по одному разу: " << globalCount;
		cout << "\n";
		cout << "\n";
	}
};