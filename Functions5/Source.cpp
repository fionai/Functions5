#include <iostream>
using namespace std;

void FillRand(int arr[], const int N);
void FillRand(double arr[], const int N);

void PrintArr(int arr[], const int N);
void PrintArr(double arr[], const int N);

void SortArr(int arr[], const int N);
void SortArr(double arr[], const int N);

int MinValueIn(int arr[], const int SIZE);
double MinValueIn(double arr[], const int SIZE);


void main()
{
	setlocale(LC_ALL, "");

	const int N = 5;
	double arr[N];

	//заполнение случайными числами
	FillRand(arr, N);

	//вывод
	PrintArr(arr, N);

	//сортировка
	SortArr(arr, N);

	//вывод
	PrintArr(arr, N);

	const int SIZE = 8;
	int brr[SIZE];

	//заполнение случайными числами
	FillRand(brr, SIZE);

	//вывод
	PrintArr(brr, SIZE);

	//сортировка
	SortArr(brr, SIZE);

	//вывод
	PrintArr(brr, SIZE);

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