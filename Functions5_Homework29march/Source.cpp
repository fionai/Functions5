#include "stdafx.h"

using namespace std;

const int ROWS = 10, COLS = 10;

template<typename T>
void PrintArr(T arr[], const int SIZE);
template<typename T>
void PrintArr(T arr[ROWS][COLS], const int ROWS, const int COLS);

void RandArr(int arr[], const int SIZE);
void RandArr(int arr[ROWS][COLS], const int ROWS, const int COLS);
void RandArr(double arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(T arr[], const int SIZE);
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double Avg(T arr[], const int SIZE);
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MinValueIn(T arr[], const int SIZE);
template<typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MaxValueIn(T arr[], const int SIZE);
template<typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void ShiftLeft(T arr[], const int SIZE, int n);
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int n = 0);

template<typename T>
void ShiftRight(T arr[], const int SIZE, int n);
template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int n = 0);

template<typename T>
void Sort(T arr[], const int SIZE);
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

//�������� ������ ������ �� ������
void CopyArr(int arr[ROWS][COLS], int arr2[ROWS][COLS], const int ROWS, const int COLS);
void CopyArr(double arr[ROWS][COLS], double arr2[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5, SIZE10 = 10;
	int arr[SIZE] = {};
	int brr[SIZE10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n;
	

	cout << "������ � ���������" <<  delimiter;

	RandArr(arr, SIZE);
	cout << "�������� ������:\n";
	PrintArr(arr, SIZE);

	cout << "\n����� ��������� ������� ����� " << Sum(arr, SIZE) << endl;
	cout << "������� �������������� ��������� ����� " << Avg(arr, SIZE) << endl;
	cout << "����������� �������� � ������� " << MinValueIn(arr, SIZE) << endl;
	cout << "������������ �������� � ������� " << MaxValueIn(arr, SIZE) << endl;
	cout << "��������������� ������:\n";
	Sort(arr, SIZE);
	PrintArr(arr, SIZE);

	cout << "\n\n�������� ������:\n";
	PrintArr(brr, SIZE10);
	cout << endl;

	cout << "������� ���������� �������: ";
	cin >> n;

	cout << "\n����� ��������� ������� �� " << n << " ������� �����: \n";
	ShiftLeft(brr, SIZE10, n);
	PrintArr(brr, SIZE10);
	cout << endl;

	for (int i = 0; i < SIZE10; i++)
		brr[i] = i;

	cout << "\n����� ��������� ������� �� " << n << " ������� �����: \n";
	ShiftRight(brr, SIZE10, n);
	PrintArr(brr, SIZE10);
	cout << endl;
	_getch();
	cout << "\033c";
	//------------------------------------------------------------------
	cout << "��������� �������" << delimiter;

	//------------------------------------------------------------------
	cout << "������������� �������\n\n";
	int arr2[ROWS][COLS] = {}, arr2_buf[ROWS][COLS] = {};

	RandArr(arr2, ROWS, COLS);
	cout << "�������� ������:\n";
	PrintArr(arr2, ROWS, COLS);
	cout << "\n����� ��������� ������� ����� " << Sum(arr2, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� ������� ����� " << Avg(arr2, ROWS, COLS) << endl;
	cout << "����������� �������� ����� " << MinValueIn(arr2, ROWS, COLS) << endl;
	cout << "������������ �������� ����� " << MaxValueIn(arr2, ROWS, COLS) << endl;

	CopyArr(arr2, arr2_buf, ROWS, COLS); //��������� �������� ������

	cout << "\n������� �������� ������: ";
	cin >> n;
	cout << "\n����� ��������� ������� �� " << n << " ������� �����: \n";
	ShiftLeft(arr2, ROWS, COLS, n);
	PrintArr(arr2, ROWS, COLS);

	cout << "\n����� ��������� ������� �� " << n << " ������� ������: \n";
	CopyArr(arr2_buf, arr2, ROWS, COLS);
	ShiftRight(arr2, ROWS, COLS, n);
	PrintArr(arr2, ROWS, COLS);

	CopyArr(arr2_buf, arr2, ROWS, COLS);
	Sort(arr2, ROWS, COLS);
	cout << "\n��������������� ������:\n";
	PrintArr(arr2, ROWS, COLS);

	_getch();
	cout << "\033c";
	//------------------------------------------------------------------
	cout << "������� � �������� �������\n\n" ;
	double arr2d[ROWS][COLS] = {}, arr2d_buf[ROWS][COLS] = {};

	RandArr(arr2d, ROWS, COLS);
	cout << "�������� ������:\n";
	PrintArr(arr2d, ROWS, COLS);
	cout << "\n����� ��������� ������� ����� " << Sum(arr2d, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� ������� ����� " << Avg(arr2d, ROWS, COLS) << endl;
	cout << "����������� �������� ����� " << MinValueIn(arr2d, ROWS, COLS) << endl;
	cout << "������������ �������� ����� " << MaxValueIn(arr2d, ROWS, COLS) << endl;

	CopyArr(arr2d, arr2d_buf, ROWS, COLS); //��������� �������� ������

	cout << "\n������� �������� ������: ";
	cin >> n;
	cout << "\n����� ��������� ������� �� " << n << " ������� �����: \n";
	ShiftLeft(arr2d, ROWS, COLS, n);
	PrintArr(arr2d, ROWS, COLS);

	cout << "\n����� ��������� ������� �� " << n << " ������� ������: \n";
	CopyArr(arr2d_buf, arr2d, ROWS, COLS);
	ShiftRight(arr2d, ROWS, COLS, n);
	PrintArr(arr2d, ROWS, COLS);

	CopyArr(arr2d_buf, arr2d, ROWS, COLS);
	Sort(arr2d, ROWS, COLS);
	cout << "\n��������������� ������:\n";
	PrintArr(arr2d, ROWS, COLS);

}
template<typename T>
void PrintArr(T arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " ";
}
template<typename T>
void PrintArr(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
}

template<typename T>
T Sum(T arr[], const int SIZE)
{
	T res = 0;
	for (int i = 0; i < SIZE; i++)
		res += arr[i];
	return res;
}
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T res = 0;
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			res += arr[i][j];
	return res;
}

template<typename T>
double Avg(T arr[], const int SIZE)
{
	return (double)Sum(arr, SIZE) / SIZE;
}
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / ROWS / COLS;
}

template<typename T>
T MinValueIn(T arr[], const int SIZE)
{
	T res = arr[0];
	for (int i = 1; i < SIZE; i++)
		if (arr[i] < res)
			res = arr[i];
	return res;
}
template<typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T res = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] < res) res = arr[i][j];
	return res;
}

template<typename T>
T MaxValueIn(T arr[], const int SIZE)
{
	T res = arr[0];
	for (int i = 1; i < SIZE; i++)
		if (arr[i] > res)
			res = arr[i];
	return res;
}
template<typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T res = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > res) res = arr[i][j];
	return res;
}

template<typename T>
void ShiftLeft(T arr[], const int SIZE, int n)
{
	for (int i = 0; i < n; i++)
	{
		T buf = arr[0];
		for (int j = 0; j < SIZE - 1; j++)
			arr[j] = arr[j + 1];
		arr[SIZE - 1] = buf;
	}
}
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int n)
{ 
	for (int k = 0; k < n; k++)
	{
		T first = arr[0][0];
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
				if (j < COLS - 1) //������� ����� ������ ������
					arr[i][j] = arr[i][j + 1];
				else if (i < ROWS - 1) // ����� ����� �����
					arr[i][j] = arr[i + 1][0];
				else
					arr[i][j] = first;
	}
}

template<typename T>
void ShiftRight(T arr[], const int SIZE, int n)
{
	for (int i = 0; i < n; i++)
	{
		T buf = arr[SIZE - 1];
		for (int j = 0; j < SIZE - 1; j++)
			arr[SIZE - 1 - j] = arr[SIZE - 2 - j];
		arr[0] = buf;
	}
}
template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int n)
{ 
	for (int k = 0; k < n; k++)
	{
		T last = arr[ROWS - 1][COLS - 1];
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
				if (j < COLS - 1) //������� ����� ������ ������
					arr[ROWS - 1 - i][COLS - 1 - j] = arr[ROWS - 1 - i][COLS - 2 - j];
				else if (i < ROWS - 1) // ����� ����� �����
					arr[ROWS - 1 - i][COLS - 1 - j] = arr[ROWS - 2 - i][COLS - 1];
				else
					arr[ROWS - 1 - i][COLS - 1 - j] = last;
	}
}

template<typename T>
void Sort(T arr[], const int SIZE)
{
	for (int i = 0; i < SIZE - 1; i++)
		for (int j = i + 1; j < SIZE; j++)
			if (arr[i] > arr[j])
			{
				T buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
}
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	
	//���������� ������������ ������������ �������� � ������ �������
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
		{
			//arr[pos_i][pos_j] ����� ��������� ����������� �������
			int pos_i = i;
			int pos_j = j;
			//��������� ������� ������� ������� ������
			for (int l = j + 1; l < COLS; l++)
				if (arr[pos_i][pos_j] > arr[i][l])
				{
					//���������� ������� ������������ ��������
					pos_i = i;
					pos_j = l;
				}
			//����� ��������� ��������� ��� ������ ���� �������
			for (int k = i+1; k < ROWS; k++)
				for (int l = 0; l < COLS; l++)
					if (arr[pos_i][pos_j] > arr[k][l])
					{
						//���������� ������� ������������ ��������
						pos_i = k;
						pos_j = l;
					}
			if (arr[pos_i][pos_j] < arr[i][j]) //���� ��������� ����������� ������ ��������, ������ �� �������
			{
				T buf = arr[pos_i][pos_j];
				arr[pos_i][pos_j] = arr[i][j];
				arr[i][j] = buf;
			}
		}
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