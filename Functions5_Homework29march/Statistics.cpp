#include "Statistics.h"

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
#include "Statistics.h"

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
