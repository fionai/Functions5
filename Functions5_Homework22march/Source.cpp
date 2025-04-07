#include <iostream>
using namespace std;

void PrintArr(int arr[], const int SIZE);
int Sum(int arr[], const int SIZE);
double Avg(int arr[], const int SIZE);
int MinValueIn(int arr[], const int SIZE);
int MaxValueIn(int arr[], const int SIZE);
void ShiftLeft(int arr[], const int SIZE, int n);
void ShiftRight(int arr[], const int SIZE, int n);

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5, SIZE10 = 10;
	int arr[SIZE] = {};
	int brr[SIZE10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n;

	cout << "РАБОТА С МАССИВАМИ\n";
	cout << "Введите 5 чисел - элементы массива: ";

	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];

	cout << "\nСумма элементов массива равна " << Sum(arr, SIZE) << endl;
	cout << "Среднее арифметическое элементов равно " << Avg(arr, SIZE) << endl;
	cout << "Минимальное значение в массиве " << MinValueIn(arr, SIZE) << endl;
	cout << "Максимальное значение в массиве " << MaxValueIn(arr, SIZE) << endl;

	cout << "\n\nИсходный массив:\n";
	PrintArr(brr, SIZE10);
	cout << endl;

	cout << "Введите количество сдвигов влево: ";
	cin >> n;

	ShiftLeft(brr, SIZE10, n);
	PrintArr(brr, SIZE10);
	cout << endl;

	for (int i = 0; i < SIZE10; i++)
		brr[i] = i;

	cout << "Введите количество сдвигов вправо: ";
	cin >> n;
	ShiftRight(brr, SIZE10, n);
	PrintArr(brr, SIZE10);
	cout << endl;

}

void PrintArr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " ";
}

int Sum(int arr[], const int SIZE)
{
	int res = 0;
	for (int i = 0; i < SIZE; i++)
		res += arr[i];
	return res;
}

double Avg(int arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}

int MinValueIn(int arr[], const int SIZE)
{
	int res = arr[0];
	for (int i = 1; i < SIZE; i++)
		if (arr[i] < res)
			res = arr[i];
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