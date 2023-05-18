#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float x;
    int n = 20;
    cin >> x;
    float s = x;
    int t = x;
    int giaithua = 1;
    for (int i = 2; i < (2 * n + 1); i++)
    {
        if (i % 2 == 0)
        {
            s -= (t * x * x) / (giaithua * i * (i + 1));
        }
        else
        {
            s += (t * x * x) / (giaithua * i * (i + 1));
        }
        t = t * x * x;
        giaithua = giaithua * i * (i + 1);
    }
    cout<<setprecision(4)<<fixed<<s;
}