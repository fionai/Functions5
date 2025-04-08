#include "Sort.h"


void Sort(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE - 1; i++)
		for (int j = i + 1; j < SIZE; j++)
			if (arr[i] > arr[j])
			{
				int buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//����� ���������� �������� ��������
	/*for (int k = 0; k < ROWS * COLS - 1; k++)
	{
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
			{
				if (j < COLS - 1) //������� ����� ������ ������
				{
					if (arr[i][j] > arr[i][j + 1])
					{
						int buf = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = buf;
					}
				}
				else if (i < ROWS - 1) //����� ������ ������
					if (arr[i][j] > arr[i + 1][0])
					{
						int buf = arr[i][j];
						arr[i][j] = arr[i + 1][0];
						arr[i + 1][0] = buf;
					}
			}
	}*/

	//���������� ������������ ������������ �������� � ������ �������
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
		{
			//arr[pos_i][pos_j] ����� ��������� ����������� �������
			int pos_i = i;
			int pos_j = j;
			//��������� ������� ������� ������� ������
			for (int l = j + 1; l < COLS; l++)
				if (arr[pos_i][pos_j] > arr[i][l])
				{
					//���������� ������� ������������ ��������
					pos_i = i;
					pos_j = l;
				}
			//����� ��������� ��������� ��� ������ ���� �������
			for (int k = i + 1; k < ROWS; k++)
				for (int l = 0; l < COLS; l++)
					if (arr[pos_i][pos_j] > arr[k][l])
					{
						//���������� ������� ������������ ��������
						pos_i = k;
						pos_j = l;
					}
			if (arr[pos_i][pos_j] < arr[i][j]) //���� ��������� ����������� ������ ��������, ������ �� �������
			{
				int buf = arr[pos_i][pos_j];
				arr[pos_i][pos_j] = arr[i][j];
				arr[i][j] = buf;
			}
		}
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	/*for (int k = 0; k < ROWS * COLS - 1; k++)
	{
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
			{
				if (j < COLS - 1) //������� ����� ������ ������
				{
					if (arr[i][j] > arr[i][j + 1])
					{
						double buf = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = buf;
					}
				}
				else if (i < ROWS - 1) //����� ������ ������
					if (arr[i][j] > arr[i + 1][0])
					{
						double buf = arr[i][j];
						arr[i][j] = arr[i + 1][0];
						arr[i + 1][0] = buf;
					}
			}
	}*/

	//���������� ������������ ������������ �������� � ������ �������
	int operations = 0;
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
		{
			//arr[pos_i][pos_j] ����� ��������� ����������� �������
			int pos_i = i;
			int pos_j = j;
			//��������� ������� ������� ������� ������
			for (int l = j + 1; l < COLS; l++)
			{
				if (arr[pos_i][pos_j] > arr[i][l])
				{
					//���������� ������� ������������ ��������
					pos_i = i;
					pos_j = l;
				}
				operations++;
			}
			//����� ��������� ��������� ��� ������ ���� �������
			for (int k = i + 1; k < ROWS; k++)
				for (int l = 0; l < COLS; l++)
				{
					if (arr[pos_i][pos_j] > arr[k][l])
					{
						//���������� ������� ������������ ��������
						pos_i = k;
						pos_j = l;
					}
					operations++;
				}
			if (arr[pos_i][pos_j] < arr[i][j]) //���� ��������� ����������� ������ ��������, ������ �� �������
			{
				double buf = arr[pos_i][pos_j];
				arr[pos_i][pos_j] = arr[i][j];
				arr[i][j] = buf;
			}
		}
	cout << "operations = " << operations << endl;
}
