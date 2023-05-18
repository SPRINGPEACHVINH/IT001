#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main() {
    float a,b,c;
    cin>>a>>b>>c;
    float p=(a+b+c)/2;
    float x=(p-a); float y=(p-b); float z=(p-c);
    cout<<setprecision(2)<<fixed<<float(sqrt(p*x*y*z));
    return 0;
}