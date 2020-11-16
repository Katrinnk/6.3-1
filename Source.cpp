#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Nep(int* a, const int size)
{
	int k = 1;
	for (int i = 0; i < size; i++)
		if (!(a[i] % 2 == 0))
			k++;
	return k;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Low = 5;
	int High = 90;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "k=" << Nep(a, n) << endl;
	return 0;
}