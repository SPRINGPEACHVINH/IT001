#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    float a,b,c;
    cin>>a>>b>>c;
    float dtb=(a+b+c)/3;
    cout<<"DTB = "<<setprecision(2)<<fixed<<dtb<<endl;
    if(dtb>=9 && dtb<=10) {
        cout<<"Loai: XUAT SAC"; return 0;
    }
    if(dtb<9 && dtb>=8) {
        cout<<"Loai: GIOI";return 0;
    }
    if(dtb<8 &&dtb>=7) {cout<<"Loai: KHA"; return 0;}
    if(dtb<7 && dtb>=6) {cout<<"Loai: TB KHA"; return 0;}
    if(dtb<6 && dtb>=5) {cout<<"Loai: TRUNG BINH"; return 0;}
    if(dtb<5&&dtb>=4) {cout<<"Loai: YEU"; return 0;}
    if(dtb<4) {cout<<"Loai: KEM"; return 0;}
    return 0;
}