#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int max=arr[0], dem=0;
    for(int i=1; i<n; i++) {
        if(arr[i]>max) {
            max=arr[i];
            dem=1;
        }
        else if(arr[i]==max) {
            dem++;
        }
    }
    if(max==arr[0]) dem++;
    cout<<max<<endl;
    cout<<dem;
}