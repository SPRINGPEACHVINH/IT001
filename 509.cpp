#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
    int x;
    cin >> x;
    if (x < 1 || x > 30)
    {
        cout << "So " << x << " khong nam trong khoang [1,30].";
    }
    else
    {
        cout << Fibo(x);
    }
}
int Fibo(int x)
{
    if (x < 0)
    {
        return -1;
    }
    else if (x == 0 || x == 1)
    {
        return x;
    }
    else
    {
        return Fibo(x - 1) + Fibo(x - 2);
    }
}
