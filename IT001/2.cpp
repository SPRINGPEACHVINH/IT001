#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a; char b;
    cin>>a>>b;
    if(a>=21) {
      if(int(b)==70 || int(b)==102) {
        cout<<"2";
        return 0;
      }
      if(int(b)==109 || int(b)==77) {
        cout<<"1";  return 0;
      }
      else{
        cout<<"I do not know why";  return 0;
      }
    }
    if(a<21) {
        if(int(b)==70 || int(b)==102) {
            cout<<"4";  return 0;
        }
        if(int(b)==109 || int(b)==77) {
            cout<<"3";  return 0;
        }
        else{
            cout<<"I do not know why";  return 0;
        }
    }
    else{
        cout<<"I do not know why";
    }
    return 0;
}