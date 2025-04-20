#include "Copy.h"

template<typename T>
void CopyArr(T arr[ROWS][COLS], T arr2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			arr2[i][j] = arr[i][j];
}