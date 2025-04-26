#pragma once

#include "stdafx.h"
#include "constants.h"

void ShiftLeft(int arr[], const int SIZE, int n);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int n = 0);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int n = 0);

void ShiftRight(int arr[], const int SIZE, int n);
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int n = 0);
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int n = 0);

