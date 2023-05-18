#include <iostream>
#include <math.h>
using namespace std;
long long power(long long q)
{
    int m = 1000000007;
    int p = 10;
    q %= (m - 1);
    long long kq = 1;
    if (q == 0)
        return 1;
    else
    {
        while (q > 0)
        {
            if (q % 2 > 0)
                kq = kq * p % m;
            p = p * p % m;
            q /= 2;
        }
        return kq;
    }
}
int num(int n)
{
    int s = 0;
    while (n > 0)
    {
        n /= 10;
        s += 1;
    }
    return s;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int dem = 0;
    int s = num(n);
    for (int i = n; i <= m; i+=power(s))
    {
        if ((i - n) % power(s) == 0)
            dem += 1;
    }
    cout << dem;
}