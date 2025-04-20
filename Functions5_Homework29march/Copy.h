#pragma once

#include "stdafx.h"
#include "constants.h"

//копирует первый массив во второй
template<typename T>
void CopyArr(T arr[ROWS][COLS], T arr2[ROWS][COLS], const int ROWS, const int COLS);