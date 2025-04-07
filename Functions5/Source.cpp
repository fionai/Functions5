#include <iostream>

using namespace std;
#define delimiter "\n-----------------------------\n"

const int ROWS = 3, COLS = 4;

void FillRand(int arr[], const int N);
void FillRand(double arr[], const int N);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void PrintArr(int arr[], const int N);
void PrintArr(double arr[], const int N);
void PrintArr(int arr[ROWS][COLS], const int ROWS, const int COLS);

void SortArr(int arr[], const int N);
void SortArr(double arr[], const int N);

int MinValueIn(int arr[], const int SIZE);
double MinValueIn(double arr[], const int SIZE);


void main()
{
	setlocale(LC_ALL, "");

	const int N = 5;
	double arr[N];

	int arr2[ROWS][COLS] = { {3, 4, 5, 6}, {7, 3, 0, 8}, {10, 5, -1, 7} };

	FillRand(arr2, ROWS, COLS);
	PrintArr(arr2, ROWS, COLS);
	cout << delimiter;

	FillRand(arr, N);//заполнение случайными числами
	PrintArr(arr, N);//вывод
		
	SortArr(arr, N);//сортировка
	PrintArr(arr, N);//вывод

	const int SIZE = 8;
	int brr[SIZE];
		
	FillRand(brr, SIZE);//заполнение случайными числами
	PrintArr(brr, SIZE);	//вывод
		
	SortArr(brr, SIZE);//сортировка
	PrintArr(brr, SIZE);//вывод

}

void FillRand(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
		arr[i] = rand() % 100;
}
void FillRand(double arr[], const int N)
{
	for (int i = 0; i < N; i++)
		arr[i] = (double)rand() / 100;
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			arr[i][j] = rand() % 100;
		cout << endl;
	}
}

void PrintArr(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
		cout << arr[i] << "\t";
	cout << endl;
}
void PrintArr(double arr[], const int N)
{
	for (int i = 0; i < N; i++)
		cout << arr[i] << "\t";
	cout << endl;
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

void SortArr(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
			if (arr[j] < arr[i])
			{
				int buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
	}
}
void SortArr(double arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
			if (arr[j] < arr[i])
			{
				double buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
	}
}

int MinValueIn(int arr[], const int SIZE)
{
	int res = arr[0];
	for (int i = 1; i < SIZE; i++)
		if (arr[i] < res)
			res = arr[i];
	return res;
}
double MinValueIn(double arr[], const int SIZE)
{
	double res = arr[0];
	for (int i = 1; i < SIZE; i++)
		if (arr[i] < res)
			res = arr[i];
	return res;
}