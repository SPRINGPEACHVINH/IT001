#include <iostream>
int input()
{
    int n;
    std::cin >> n;
    return n;
}
void input(int &n) {
    std::cin>>n;
}
int TongUocChung(int a, int b)
{
    int s=0;
    for (int i = 1; i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            s+=i;
    }
    return s;
}
int main()
{
    int a, b;
    a = input();
    input(b);
    std::cout << TongUocChung(a, b);
    return 0;
}
