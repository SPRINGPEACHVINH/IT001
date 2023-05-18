#include <iostream>
using namespace std;
/**
 * If the divisor is greater than the dividend, subtract the divisor from the dividend until the
 * dividend is less than the divisor
 * 
 * @param m the dividend
 * @param n the number to be divided
 * 
 * @return The remainder of the division of m by n.
 */
int modulo(int m, int n)
{
    if (n == m)
        return 0;
    else if (n < m)
        return modulo(m-n, n);
    else
        return m;
}
int main()
{
    int m, n;
    cin >> m >> n;
    cout << modulo(m, n);
}
