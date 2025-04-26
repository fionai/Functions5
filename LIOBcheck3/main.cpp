#include <iostream>
#include <RandArr.h>
#include<PrintArr.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[5];
	RandArr(arr, n);
	PrintArr(arr, n);

}