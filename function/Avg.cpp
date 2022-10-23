#include "Avg.h"
#include "Sum.h"
template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
