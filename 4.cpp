#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main()
{
    double a;
    int b;
    cin >> a >> b;
    cout << setprecision(10) << round(a*b)/b;
    return 0;
}