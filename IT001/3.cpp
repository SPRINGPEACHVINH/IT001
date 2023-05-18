#include<iostream>
using namespace std;
int main() {
    cout<<"What is the outdoor temperature?"<<endl;
    int a; cin>>a;
    cout<<"What is your plan today?"<<endl;
    if(a<10) {
        cout<<"Go to bed"; return 0;
    }
    if(a>=10 && a<24) {
        cout<<"Good day to play tennis"; return 0;
    }
    if(a>=24 && a<33) {
        cout<<"Good day for golfing";  return 0;
    }
    if(a>=33) {
        cout<<"Good day for swimming"; return 0;
    }
    return 0;
}