#include <iostream>
using namespace std;
int ngto(int x)
{   
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int reverse(int s) {
    int temp;
    int x=0;
        while(s!=0) {
            temp=s%10;
            x=x*10+temp;
            s/=10;
        }
        s=x;
        return s;
}
int main() {
    int a,b;
    cin>>a>>b;
    int n;
    int dem=0;
    for(int i=a; i<=b; i++) {
        n=reverse(i);
        if(ngto(i)==1 && ngto(n)==1) {
            dem+=1;
        }
    }
    cout<<dem;
}
