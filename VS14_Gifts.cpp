#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long n, a;
    cin >> n >> a;
    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr+1,arr+n+1);
    for (int i = n; i >= 1; i--)
    {
        if(arr[i] > a) continue;
        else if(arr[i]+arr[1] > a) continue;
        for (int j = i - 1; j > 0; j--)
        {
            if (arr[j] + arr[i] <= a)
            {
                cout << arr[j] + arr[i];
                return 0;
            }
        }
    }
}