#include <iostream>
#include <conio.h>
using namespace std;
#define delimiter "\n------------------------------------\n"

const int ROWS = 10, COLS = 10;

void PrintArr(int arr[], const int SIZE);
void PrintArr(int arr[ROWS][COLS], const int ROWS, const int COLS);
void PrintArr(double arr[ROWS][COLS], const int ROWS, const int COLS);

void RandArr(int arr[], const int SIZE);
void RandArr(int arr[ROWS][COLS], const int ROWS, const int COLS);
void RandArr(double arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int SIZE);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int SIZE);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

int MinValueIn(int arr[], const int SIZE);
int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);

int MaxValueIn(int arr[], const int SIZE);
int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);

void ShiftLeft(int arr[], const int SIZE, int n);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int n = 0);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int n = 0);

void ShiftRight(int arr[], const int SIZE, int n);
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int n = 0);
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int n = 0);

void Sort(int arr[], const int SIZE);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);

//копирует еп==первый массив во второй
void CopyArr(int arr[ROWS][COLS], int arr2[ROWS][COLS], const int ROWS, const int COLS);
void CopyArr(double arr[ROWS][COLS], double arr2[ROWS][COLS], const int ROWS, const int COLS);

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

void PrintArr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " ";
}
void PrintArr(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}
void PrintArr(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

void RandArr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		arr[i] = rand() % 100;
}
void RandArr(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			arr[i][j] = rand() % 100;
}
void RandArr(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			arr[i][j] = (double)rand() / 100;
}

int Sum(int arr[], const int SIZE)
{
	int res = 0;
	for (int i = 0; i < SIZE; i++)
		res += arr[i];
	return res;
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int res = 0;
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			res += arr[i][j];
	return res;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double res = 0;
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			res += arr[i][j];
	return res;
}


double Avg(int arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / ROWS / COLS;
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / ROWS / COLS;
}


int MinValueIn(int arr[], const int SIZE)
{
	int res = arr[0];
	for (int i = 1; i < SIZE; i++)
		if (arr[i] < res)
			res = arr[i];
	return res;
}
int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int res = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] < res) res = arr[i][j];
	return res;
}
double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double res = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] < res) res = arr[i][j];
	return res;
}

int MaxValueIn(int arr[], const int SIZE)
{
	int res = arr[0];
	for (int i = 1; i < SIZE; i++)
		if (arr[i] > res)
			res = arr[i];
	return res;
}
int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int res = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > res) res = arr[i][j];
	return res;
}

double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double res = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > res) res = arr[i][j];
	return res;
}

void ShiftLeft(int arr[], const int SIZE, int n)
{
	for (int i = 0; i < n; i++)
	{
		int buf = arr[0];
		for (int j = 0; j < SIZE - 1; j++)
			arr[j] = arr[j + 1];
		arr[SIZE - 1] = buf;
	}
}
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int n)
{ 
	for (int k = 0; k < n; k++)
	{
		int first = arr[0][0];
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
				if (j < COLS - 1) //простой сдвиг внутри строки
					arr[i][j] = arr[i][j + 1];
				else if (i < ROWS - 1) // сдвиг между строк
					arr[i][j] = arr[i + 1][0];
				else
					arr[i][j] = first;
	}
}
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int n)
{
	for (int k = 0; k < n; k++)
	{
		double first = arr[0][0];
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
				if (j < COLS - 1) //простой сдвиг внутри строки
					arr[i][j] = arr[i][j + 1];
				else if (i < ROWS - 1) // сдвиг между строк
					arr[i][j] = arr[i + 1][0];
				else
					arr[i][j] = first;
	}
}


void ShiftRight(int arr[], const int SIZE, int n)
{
	for (int i = 0; i < n; i++)
	{
		int buf = arr[SIZE - 1];
		for (int j = 0; j < SIZE - 1; j++)
			arr[SIZE - 1 - j] = arr[SIZE - 2 - j];
		arr[0] = buf;
	}
}
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int n)
{ 
	for (int k = 0; k < n; k++)
	{
		int last = arr[ROWS - 1][COLS - 1];
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
				if (j < COLS - 1) //простой сдвиг внутри строки
					arr[ROWS - 1 - i][COLS - 1 - j] = arr[ROWS - 1 - i][COLS - 2 - j];
				else if (i < ROWS - 1) // сдвиг между строк
					arr[ROWS - 1 - i][COLS - 1 - j] = arr[ROWS - 2 - i][COLS - 1];
				else
					arr[ROWS - 1 - i][COLS - 1 - j] = last;
	}
}
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int n)
{ 
	for (int k = 0; k < n; k++)
	{
		double last = arr[ROWS - 1][COLS - 1];
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
				if (j < COLS - 1) //простой сдвиг внутри строки
					arr[ROWS - 1 - i][COLS - 1 - j] = arr[ROWS - 1 - i][COLS - 2 - j];
				else if (i < ROWS - 1) // сдвиг между строк
					arr[ROWS - 1 - i][COLS - 1 - j] = arr[ROWS - 2 - i][COLS - 1];
				else
					arr[ROWS - 1 - i][COLS - 1 - j] = last;
	}
}


void Sort(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE - 1; i++)
		for (int j = i + 1; j < SIZE; j++)
			if (arr[i] > arr[j])
			{
				int buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//здесь сравниваем соседние элементы
	/*for (int k = 0; k < ROWS * COLS - 1; k++)
	{
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
			{
				if (j < COLS - 1) //простой обмен внутри строки
				{
					if (arr[i][j] > arr[i][j + 1])
					{
						int buf = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = buf;
					}
				}
				else if (i < ROWS - 1) //обмен сквозь строки
					if (arr[i][j] > arr[i + 1][0])
					{
						int buf = arr[i][j];
						arr[i][j] = arr[i + 1][0];
						arr[i + 1][0] = buf;
					}
			}
	}*/

	//сортировка перемещением минимального элемента в начало массива
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
		{
			//arr[pos_i][pos_j] будет содержать минимальный элемент
			int pos_i = i;
			int pos_j = j;
			//переберем сначала остаток текущей строки
			for (int l = j + 1; l < COLS; l++)
				if (arr[pos_i][pos_j] > arr[i][l])
				{
					//запоминаем позицию минимального элемента
					pos_i = i;
					pos_j = l;
				}
			//затем переберем полностью все строки ниже текущей
			for (int k = i+1; k < ROWS; k++)
				for (int l = 0; l < COLS; l++)
					if (arr[pos_i][pos_j] > arr[k][l])
					{
						//запоминаем позицию минимального элемента
						pos_i = k;
						pos_j = l;
					}
			if (arr[pos_i][pos_j] < arr[i][j]) //если найденный минимальный меньше текущего, меняем их местами
			{
				int buf = arr[pos_i][pos_j];
				arr[pos_i][pos_j] = arr[i][j];
				arr[i][j] = buf;
			}
		}
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	/*for (int k = 0; k < ROWS * COLS - 1; k++)
	{
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
			{
				if (j < COLS - 1) //простой обмен внутри строки
				{
					if (arr[i][j] > arr[i][j + 1])
					{
						double buf = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = buf;
					}
				}
				else if (i < ROWS - 1) //обмен сквозь строки
					if (arr[i][j] > arr[i + 1][0])
					{
						double buf = arr[i][j];
						arr[i][j] = arr[i + 1][0];
						arr[i + 1][0] = buf;
					}
			}
	}*/

	//сортировка перемещением минимального элемента в начало массива
	int operations = 0;
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
		{
			//arr[pos_i][pos_j] будет содержать минимальный элемент
			int pos_i = i;
			int pos_j = j;
			//переберем сначала остаток текущей строки
			for (int l = j + 1; l < COLS; l++)
			{
				if (arr[pos_i][pos_j] > arr[i][l])
				{
					//запоминаем позицию минимального элемента
					pos_i = i;
					pos_j = l;
				}
				operations++;
			}
			//затем переберем полностью все строки ниже текущей
			for (int k = i + 1; k < ROWS; k++)
				for (int l = 0; l < COLS; l++)
				{
					if (arr[pos_i][pos_j] > arr[k][l])
					{
						//запоминаем позицию минимального элемента
						pos_i = k;
						pos_j = l;
					}
					operations++;
				}
			if (arr[pos_i][pos_j] < arr[i][j]) //если найденный минимальный меньше текущего, меняем их местами
			{
				double buf = arr[pos_i][pos_j];
				arr[pos_i][pos_j] = arr[i][j];
				arr[i][j] = buf;
			}
		}
	cout << "operations = " << operations << endl;
}

void CopyArr(int arr[ROWS][COLS], int arr2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			arr2[i][j]  = arr[i][j];
}
void CopyArr(double arr[ROWS][COLS], double arr2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			arr2[i][j] = arr[i][j];
}