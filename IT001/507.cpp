#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
float calculate(int n)
{
    float s = n;
    if (n == 1)
        return s;
    return sqrt(s + calculate(n - 1));
}
int main()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(2) << calculate(n);
    return 0;
}
/**
 * It takes an integer as input and returns the square root of the sum of the input and the square root
 * of the sum of the input minus one and the square root of the sum of the input minus two and so on
 * until the input is one
 *
 * @param n the number of terms in the series
 *
 * @return The square root of the sum of the number and the square root of the sum of the number and
 * the square root of the sum of the number and the square root of the sum of the number and the square
 * root of the sum of the number and the square root of the sum of the number and the square root of
 * the sum of the number and the square root of the sum of the number and
 */
