#include "Sort.h"

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			// arr[j] перебираем элемент
			//arr[i] выбранный элемент в котором мы хотим поместить мин значение
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	{
		for (int i = 0; i < ROWS * COLS; i++)
		{
			for (int j = i + 1; j < ROWS * COLS; j++)
			{
				if (arr[0][j] < arr[0][i])
				{
					int buffer = arr[0][i];
					arr[0][i] = arr[0][j];
					arr[0][j] = buffer;
				}
			}
		}
	}
}