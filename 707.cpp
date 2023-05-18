#include <iostream>
#define MAX 100
using namespace std;
struct Matranvuong
{
    int hang;
    int cot;
    float a[MAX][MAX];
};
void input (Matranvuong &a)
{
    cin >> a.hang >> a.cot;
    for(int i = 0; i < a.hang; i++)
    {
        for(int j = 0; j < a.cot; j++)
        {
            cin >> a.a[i][j];
        }
    }
}
bool doixung (Matranvuong a)
{
    for(int i = 0; i < a.hang; i++)
    {
        for(int j = 0; j < a.cot; j++)
        {
            if (a.a[i][j] != a.a[j][i])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    Matranvuong a;
    input(a);
    if(doixung(a) == true)
    {
        cout << "Yes";
    }
    else 
    {
        cout << "No";
    }
    return 0;
}