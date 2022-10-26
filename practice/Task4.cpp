
/*
ЗАДАНИЕ 4
ОБРАБОТКА ДВУМЕРНЫХ МАССИВОВ.
*/

#include <iostream>
#include <math.h>

using namespace std;

class Task4 {

public:

	//a)
	static void Task_4a() {
		cout << "Задание 4.\n";
		cout << "а)\n";

		const int n = 4; const int m = 4;
		int A[n][m], i, j;

		cout << "Введите элементы матрицы А:";
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++)
				cin >> A[i][j];
		}
		cout << "Матрица А:" << endl;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++)
				cout << " \t" << A[i][j];
			cout << endl;
		}
		cout << "\n";

		int index_str_min = 0, index_stlb_min = 0;
		int min = A[0][0];
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++)
				if (A[i][j] < min) {
					min = A[i][j];
					index_str_min = i + 1; index_stlb_min = j + 1;
				}
		}
		cout << "Минимальное значение: " << min << endl;
		cout << "Номер строки, в которой находится минимальное значение: " << index_str_min << endl;
		cout << "Номер столбца, в котором находится минимальное значение: " << index_stlb_min << endl;
		cout << endl;

		int index_str_max = 0, index_stlb_max = 0;
		int max = A[0][0]; {
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					if (A[i][j] > max) {
						max = A[i][j];
						index_str_max = i + 1; index_stlb_max = j + 1;
					}
		}
		cout << "Максимальное значение:" << max << endl;
		cout << "Номер строки, в которой находится максимальное значение:" << index_str_max << endl;
		cout << "Номер столбца, в котором находится максимальное значение:" << index_stlb_max << endl;

		cout << endl;
		int diapazon = 0;
		cout << "Диапазон изменения значений элементов матрицы А:";
		diapazon = max - min;
		cout << diapazon;
		cout << "\n";
		cout << "\n";
	}

	//б)
	static void Task_4b() {
		cout << "б)\n";

		srand(time(NULL));
		const int n = 7;
		const int m = 7;
		int A[n][m], i, j;

		cout << "Исходная матрица A:";
		cout << endl;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				A[i][j] = rand() % 21 - 10;
				cout << A[i][j] << "\t";
			}
			cout << endl;
		}
		cout << "\n";

		cout << "Пребразованная матрица А:";
		cout << endl;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if (A[i][j] < 0) A[i][j] = 0;
				cout << A[i][j] << "\t";
			}
			cout << endl;
		}
		cout << endl;

		cout << "Сумма положительных элементов, расположенных на побочной диагонали матрицы А: ";
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += A[i][n - 1 - i];
		}
		cout << sum;
		cout << "\n";
		cout << "\n";
	}

	//в)
	static void Task_4v() {
		cout << "в)\n";
		int i, j;
		const int n = 10;
		float A[n][n], v;

		cout << "Матрица А:" << endl;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				v = i + j;
				if (v == 0) A[i][j] = 0;
				else A[i][j] = 1 / v;
				cout.precision(3);
				cout << A[i][j] << "\t";
			}
			cout << endl;
		}
		cout << endl;

		int Sredneye();
		{
			for (int i = 0; i < n; i++) {
				float sum = 0;
				for (int j = 0; j < n; j++) {
					sum += A[j][i];
				}
				cout << "Среднее арефметическое " << i + 1 << "-го столбца: " << sum / n << "\n";
			}
		}
		cout << "\n";
	}

	//г)
	static void Task_4g() {
		cout << "г)\n";
		srand(time(NULL));

		int X[8][8];
		int B[8];

		for (int i = 0; i < 8; ++i) B[i] = 1;
		cout << "Матрица X:" << endl;
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				X[i][j] = rand() % 21 - 10;
				cout << X[i][j] << "\t";
				if (X[i][j] > 0) B[i] *= X[i][j];
			}
			cout << endl;
		}

		cout << "\n";
		cout << "Произведение положительных элементов каждой строки матрицы X: " << endl;
		for (int i = 0; i < 8; ++i) cout << B[i] << "\n";

		int min = B[0];
		int index = 0;
		for (int i = 0; i < 8; ++i) {
			if (B[i] < min) {
				min = B[i];
				index = i + 1;
			}
		}
		cout << "\n";
		cout << "Минимальное произведение:" << min << endl;
		cout << "Номер строки, в которой содержится минимальное произведение:" << index;
		cout << "\n";
		cout << "\n";
	}
};