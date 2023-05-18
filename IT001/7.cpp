#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main() {
   double a,b,c;
    cin>>a>>b>>c;
    if(a<b+c && b<c+a && c<a+b) {
        double p=(a+b+c)/2;
        double s=sqrt(p*(p-a)*(p-b)*(p-c));
        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a) {
            cout<<"Tam giac vuong, dien tich = "<<setprecision(2)<<fixed<<s; return 0;
        }
        if(a==b&&b==c) {
            cout<<"Tam giac deu, dien tich = "<<setprecision(2)<<fixed<<s; return 0;
        }
        if(a==b || b==c || c==a) {
            cout<<"Tam giac can, dien tich = "<<setprecision(2)<<fixed<<s; return 0;
        }
        else {
            cout<<"Tam giac thuong, dien tich = "<<setprecision(2)<<fixed<<s; return 0;
        }
    }
    else {
        cout<<"Khong phai tam giac";
    }
    return 0;
}