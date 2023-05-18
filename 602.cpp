#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100
void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n, int y);
int ngto(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
void NhapmangSNT(int a[], int &n)
{
	cin >> n;
	int k = 0;
	int i = 2;
	while (k < n)
	{
		if (ngto(i) == 1)
		{
			a[k] = i;
			k++;
		}
		i++;
	}
}
int Chuay(int n, int y) {
	while(n>0) {
		if(y==n%10) return 1;
		n/=10;
	}
	return 0;
}
int SoPhanTuChuaY(int a[], int n, int y)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if(Chuay(a[i],y)==1) count++;
	}
	return count;
}
int main()
{
	int a[MAX], n, y;
	cin >> y;
	NhapmangSNT(a, n);
	cout << SoPhanTuChuaY(a, n, y) << endl;
	;
	return 0;
}
