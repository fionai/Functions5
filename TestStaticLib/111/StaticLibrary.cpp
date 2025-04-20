//StaticLibrary.cpp

#include "StaticLibrary.h"

namespace StaticLib
{
	int StaticClass::NewSum(int arr[], const int SIZE)
	{
		int res = 0;
		for (int i = 0; i < SIZE; i++)
			res += arr[i];
		return res;
	}
}