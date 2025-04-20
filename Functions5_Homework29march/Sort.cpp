#include "Sort.h"

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

	//сортировка перемещением минимального элемента в начало массива
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
		{
			//arr[pos_i][pos_j] будет содержать минимальный элемент
			int pos_i = i;
			int pos_j = j;
			//переберем сначала остаток текущей строки
			for (int l = j + 1; l < COLS; l++)
				if (arr[pos_i][pos_j] > arr[i][l])
				{
					//запоминаем позицию минимального элемента
					pos_i = i;
					pos_j = l;
				}
			//затем переберем полностью все строки ниже текущей
			for (int k = i + 1; k < ROWS; k++)
				for (int l = 0; l < COLS; l++)
					if (arr[pos_i][pos_j] > arr[k][l])
					{
						//запоминаем позицию минимального элемента
						pos_i = k;
						pos_j = l;
					}
			if (arr[pos_i][pos_j] < arr[i][j]) //если найденный минимальный меньше текущего, меняем их местами
			{
				T buf = arr[pos_i][pos_j];
				arr[pos_i][pos_j] = arr[i][j];
				arr[i][j] = buf;
			}
		}
}
