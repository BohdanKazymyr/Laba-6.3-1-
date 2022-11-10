#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int Create(int* a, const int size, int Low, int High)
{
	double i = 0;
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
	return 0;
}
int Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
	return 0;
}
int Min(int* a, const int size)
{
	int min = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] < min)
			min = a[i];
	return min;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 21;
	int i = 0;
	int a[n];
	int Low = 15;
	int High = 85;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "Min = " << Min(a, n) << endl;
}