#pragma once

#include"stdafx.h"
#include"Constants.h"

template<typename T>
void ShiftLeft(T arr[], const int SIZE, int n);
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int n);
template<typename T>
void ShiftRight(T arr[], const int SIZE, int n);
template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int n);
