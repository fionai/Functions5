#include "Shifts.h"


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

