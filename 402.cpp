#include <iostream>
using namespace std;
int squarenumber(int n)
{
    if (n < 1)
        return 0;
    int i = 1;
    while (i * i <= n)
    {
        if (i * i == n)
            return 1;
        i++;
    }
    return 0;
}
int sum_all_square(int n) {
    int s=0;
    for(int i=1; i <= n; i++) {
        if(n%i==0 && squarenumber(i)==1) {
            s+=i;
        }
    }
    return s;
}
int main() {
    int n;
    cin>>n;
    cout << sum_all_square(n);
}
