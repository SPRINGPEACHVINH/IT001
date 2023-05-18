#include<iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    if(x>1) {
        for(int i=2; i<x; i++) {
            if(x%i==0) {
                cout<<"0";
                return 0;
            }
        }
        cout<<"1"; return 0;
    }
    else {
        cout<<"-1";
    }
    return 0;
}