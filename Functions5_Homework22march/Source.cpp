#include <iostream>
using namespace std;

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

	cout << "������ � ���������\n";
	cout << "������� 5 ����� - �������� �������: ";

	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];


	cout << "������ �� �������:\n";
	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " ";

	cout << "\n����� ��������� ������� ����� " << Sum(arr, SIZE) << endl;
	cout << "������� �������������� ��������� ����� " << Avg(arr, SIZE) << endl;
	cout << "����������� �������� � ������� " << MinValueIn(arr, SIZE) << endl;
	cout << "������������ �������� � ������� " << MaxValueIn(arr, SIZE) << endl;

	cout << "\n\n�������� ������:\n";
	for (int i = 0; i < SIZE10; i++)
		cout << brr[i] << " ";
	cout << endl;

	cout << "������� ���������� ������� �����: ";
	cin >> n;

	ShiftLeft(brr, SIZE10, n);
	for (int i = 0; i < SIZE10; i++)
		cout << brr[i] << " ";
	cout << endl;

	for (int i = 0; i < SIZE10; i++)
		brr[i] = i;

	cout << "������� ���������� ������� ������: ";
	cin >> n;
	ShiftRight(brr, SIZE10, n);
	for (int i = 0; i < SIZE10; i++)
		cout << brr[i] << " ";
	cout << endl;

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