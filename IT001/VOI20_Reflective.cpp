#include <bits/stdc++.h>
using namespace std;
/**
 * It calculates the power of 2 modulo 1000000007.
 * 
 * @param q the number of queries
 * 
 * @return the value of the power function.
 */
long long power(long long q)
{
    int m = 1000000007;
    int p = 2;
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
/**
 * It returns the number of bits of the binary representation of n/2.
 * 
 * @param n the number to be checked
 * 
 * @return The number of digits of the largest power of 2 that is a factor of n.
 */
long long boicua2(long long n)
{
    int i = 1;
    n /= 2;
    while (n >= power(i))
    {
        if (n % power(i) != 0)
            return i;
        i++;
    }
    return i;
}
/**
 * The function returns the number of 2s in the prime factorization of a number.
 */
int main()
{
    long long m, n;
    cin >> m >> n;
    long long s = 0;
    if (m % 2 == 0)
    {
        for (int i = m; i <= n; i += 2)
        {
            int count = boicua2(i);
            s += count;
        }
    }
    else
    {
        for (int i = m + 1; i <= n; i += 2)
        {
            int count = boicua2(i);
            s += count;
        }
    }
    cout << s;
}