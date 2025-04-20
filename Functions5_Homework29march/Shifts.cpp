#include"Shifts.h"

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
				if (j < COLS - 1) //простой сдвиг внутри строки
					arr[i][j] = arr[i][j + 1];
				else if (i < ROWS - 1) // сдвиг между строк
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
				if (j < COLS - 1) //простой сдвиг внутри строки
					arr[ROWS - 1 - i][COLS - 1 - j] = arr[ROWS - 1 - i][COLS - 2 - j];
				else if (i < ROWS - 1) // сдвиг между строк
					arr[ROWS - 1 - i][COLS - 1 - j] = arr[ROWS - 2 - i][COLS - 1];
				else
					arr[ROWS - 1 - i][COLS - 1 - j] = last;
	}
}