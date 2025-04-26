#include <iostream>
#include <RandArr.h>
#include <PrintArr.h>
#include <Sort.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	RandArr(arr, n);
	PrintArr(arr, n);
	Sort(arr, n);
	cout << endl;
	PrintArr(arr, n);
	cout << delimiter << endl;

	int arr2[ROWS][COLS];
	RandArr(arr2, ROWS, COLS);
	PrintArr(arr2, ROWS, COLS);

}