#include<iostream>
using namespace std;
int fibonacci(int x) {
    if (x < 0) {
        return -1;
    } else if (x == 0 || x == 1) {
        return x;
    } else {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}
int main() {
    int n; cin>>n;
    if(n<1 || n>30) {
        cout<<"So "<<n<<" khong nam trong khoang [1,30].";
    }
    else {
        cout<<fibonacci(n);
    }
}