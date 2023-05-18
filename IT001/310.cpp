#include <iostream>
#include <math.h>
using namespace std;
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
int main()
{
    int n;
    cin >> n;
    int dem = 0;
    for (int i = 2; i + 2 < n; i++)
    {
        if (ngto(i))
        {
            if (ngto(i + 2))
            {
                cout << i << ", " << i + 2 << endl;
                dem += 1;
            }
        }
    }
    cout << "Tong: " << dem << " cap so sinh doi < " << n;
}