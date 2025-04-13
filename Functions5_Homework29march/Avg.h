#pragma once

#include "stdafx.h"
#include "Constants.h"

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
