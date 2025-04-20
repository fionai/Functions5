#pragma once

#include "stdafx.h"
#include "Constants.h"

template<typename T>
T MinValueIn(T arr[], const int SIZE);
template<typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MaxValueIn(T arr[], const int SIZE);
template<typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
