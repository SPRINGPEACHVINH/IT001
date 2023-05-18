#include <iostream>
#include <cmath>
using namespace std;
int minn(int m, int n) {
    if(m>n) return n;
    return m;
}
int maxx(int m, int n) {
    if(m>n) return m; 
    return n;
}
int sum_common_prime(int m, int n)
{
    int min=minn(m,n);
    int max=maxx(m,n);
    int sum = 0;
    int index = 0;
    int *a= new int(min/2);
    int k = 0;
    int i = 2;
    while (min > 1)
    {
        if (min % i == 0)
        {
            if (k == 0)
            {
                a[index] = i;
                k = 1;
                index++;
            }
            min /= i;
        }
        else
        {
            k = 0;
            i++;
        }
    }
    for (int i = 0; i < index; i++)
    {
        if (max % a[i] == 0)
            sum += a[i];
    }
    if(sum!=0) return sum;
    return -1;
}
// }
// int ngto(int x)
// {
    // if (x == 2)
        // return 1;
    // else if (x % 2 == 0)
        // return 0;
    // for (int i = 3; i <= sqrt(x); i += 2)
    // {
        // if (x % i == 0)
        // {
            // return 0;
        // }
    // }
    // return 1;
// }
// int min(int x, int y)
// {
    // if (x > y)
        // return y;
    // return x;
// }
// int max(int x, int y)
// {
    // if (x > y)
        // return x;
    // return y;
// }
// int sum_common_prime(int m, int n)
// {
    // int sum = 0;
    // for (int i = 2; i <= min(m, n) / 2; i++)
    // {
        // if (ngto(i) == 1 && m % i == 0 && n % i == 0)
            // sum += i;
    // }
    // if (max(m, n) % min(m, n) == 0)
        // sum += min(m, n);
    // if (sum != 0)
        // return sum;
    // return -1;
// }
int main()
{
    int m, n;
    cin >> m >> n;
    cout << sum_common_prime(m, n);
}

