#include "stdafx.h"
#include "constants.h"
#include "PrintArr.h"
#include "RandArr.h"
#include "Statistics.h"
#include "Shifts.h"
#include "Sort.h"
#include "Copy.h"


void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5, SIZE10 = 10;
	int arr[SIZE] = {};
	int brr[SIZE10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n;
	

	cout << "РАБОТА С МАССИВАМИ" <<  delimiter;

	RandArr(arr, SIZE);
	cout << "Исходный массив:\n";
	PrintArr(arr, SIZE);

	cout << "\nСумма элементов массива равна " << Sum(arr, SIZE) << endl;
	cout << "Среднее арифметическое элементов равно " << Avg(arr, SIZE) << endl;
	cout << "Минимальное значение в массиве " << MinValueIn(arr, SIZE) << endl;
	cout << "Максимальное значение в массиве " << MaxValueIn(arr, SIZE) << endl;
	cout << "Отсортированный массив:\n";
	Sort(arr, SIZE);
	PrintArr(arr, SIZE);

	cout << "\n\nИсходный массив:\n";
	PrintArr(brr, SIZE10);
	cout << endl;

	cout << "Введите количество сдвигов: ";
	cin >> n;

	cout << "\nСдвиг исходного массива на " << n << " позиций влево: \n";
	ShiftLeft(brr, SIZE10, n);
	PrintArr(brr, SIZE10);
	cout << endl;

	for (int i = 0; i < SIZE10; i++)
		brr[i] = i;

	cout << "\nСдвиг исходного массива на " << n << " позиций влево: \n";
	ShiftRight(brr, SIZE10, n);
	PrintArr(brr, SIZE10);
	cout << endl;
	_getch();
	cout << "\033c";
	//------------------------------------------------------------------
	cout << "ДВУМЕРНЫЕ МАССИВЫ" << delimiter;

	//------------------------------------------------------------------
	cout << "Целочисленные массивы\n\n";
	int arr2[ROWS][COLS] = {}, arr2_buf[ROWS][COLS] = {};

	RandArr(arr2, ROWS, COLS);
	cout << "Исходный массив:\n";
	PrintArr(arr2, ROWS, COLS);
	cout << "\nСумма элементов массива равна " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива равно " << Avg(arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение равно " << MinValueIn(arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение равно " << MaxValueIn(arr2, ROWS, COLS) << endl;

	CopyArr(arr2, arr2_buf, ROWS, COLS); //сохраняем исходный массив

	cout << "\nВведите величину сдвига: ";
	cin >> n;
	cout << "\nСдвиг исходного массива на " << n << " позиций влево: \n";
	ShiftLeft(arr2, ROWS, COLS, n);
	PrintArr(arr2, ROWS, COLS);

	cout << "\nСдвиг исходного массива на " << n << " позиций вправо: \n";
	CopyArr(arr2_buf, arr2, ROWS, COLS);
	ShiftRight(arr2, ROWS, COLS, n);
	PrintArr(arr2, ROWS, COLS);

	CopyArr(arr2_buf, arr2, ROWS, COLS);
	Sort(arr2, ROWS, COLS);
	cout << "\nОтсортированный массив:\n";
	PrintArr(arr2, ROWS, COLS);

	_getch();
	cout << "\033c";
	//------------------------------------------------------------------
	cout << "Массивы с дробными числами\n\n" ;
	double arr2d[ROWS][COLS] = {}, arr2d_buf[ROWS][COLS] = {};

	RandArr(arr2d, ROWS, COLS);
	cout << "Исходный массив:\n";
	PrintArr(arr2d, ROWS, COLS);
	cout << "\nСумма элементов массива равна " << Sum(arr2d, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива равно " << Avg(arr2d, ROWS, COLS) << endl;
	cout << "Минимальное значение равно " << MinValueIn(arr2d, ROWS, COLS) << endl;
	cout << "Максимальное значение равно " << MaxValueIn(arr2d, ROWS, COLS) << endl;

	CopyArr(arr2d, arr2d_buf, ROWS, COLS); //Сохраняем исходный массив

	cout << "\nВведите величину сдвига: ";
	cin >> n;
	cout << "\nСдвиг исходного массива на " << n << " позиций влево: \n";
	ShiftLeft(arr2d, ROWS, COLS, n);
	PrintArr(arr2d, ROWS, COLS);

	cout << "\nСдвиг исходного массива на " << n << " позиций вправо: \n";
	CopyArr(arr2d_buf, arr2d, ROWS, COLS);
	ShiftRight(arr2d, ROWS, COLS, n);
	PrintArr(arr2d, ROWS, COLS);

	CopyArr(arr2d_buf, arr2d, ROWS, COLS);
	Sort(arr2d, ROWS, COLS);
	cout << "\nОтсортированный массив:\n";
	PrintArr(arr2d, ROWS, COLS);

}