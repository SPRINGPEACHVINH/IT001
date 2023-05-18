#include<iostream>
using namespace std;
int dodai(long long d, long long r, long long n) {
     long long dodai=2*(r*n+d);
     return dodai;
}
int main() {
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<dodai(a,b,c);
}