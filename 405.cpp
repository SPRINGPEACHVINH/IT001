#include <iostream>
using namespace std;
int TongChuSo(int n)
{
    int temp;
    int s = 0;
    while (n > 0)
    {
        temp = n % 10;
        s += temp;
        n = n / 10;
    }
    return s;
}

int main()
{
    int n;
    std::cin>>n;
    std::cout << TongChuSo(n);
}