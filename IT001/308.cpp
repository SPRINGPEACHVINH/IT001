#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp;
    int s = 0;
    while (n > 0)
    {
        temp = n % 10;
        s += temp;
        n = n / 10;
    }
    cout << s;
}