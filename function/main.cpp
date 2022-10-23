#pragma warning(disable:4326)

#include "Constants.h"
#include "Print.h"
#include "Print.cpp"
#include "Avg.h"
#include "Avg.cpp"
#include "maxValueIn.h"
#include "maxValueIn.cpp"
#include "minValueIn.h"
#include "minValueIn.cpp"
#include "shiftLeft.h"
#include "shiftLeft.cpp"
#include "shiftRight.h"
#include "shiftRight.cpp"
#include "Sort.h"
#include "Sort.cpp"
#include "Sum.h"
#include "Sum.cpp"
#include "stdafx.h"


//#define DEBUG
// 
//int Add(int a, int b);
//int Sub(int a, int b);
//int Mul(int a, int b);
//double Div(int a, int b);
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	const int n=10;
	int arr[n] = {1,2,3,4,5,6,7,8,9,10};
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементтов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);

	/*int number_of_shifts; //кол во сдвигов
	cout << "введите количество сдигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "введите количество сдигов: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);*/

	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	
	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);


#ifdef DEBUG
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
#endif // DEBUG

}

#ifdef DEBUG
int Add(int a, int b)
{
	//Addition сложение
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//Subtraction вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication умоножение
	return a * b;
}
double Div(int a, int b)
{
	//Division деление
	return (double)a / b;
}
#endif // DEBUG
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
		
}