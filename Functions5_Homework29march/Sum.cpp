#include "Sum.h"

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
