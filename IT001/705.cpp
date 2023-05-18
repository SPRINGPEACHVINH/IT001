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
float trace (Matranvuong a)
{
    float trace = 0;
    for(int i = 0; i < a.hang; i++)
    {
        for(int j = 0; j < a.cot; j++)
        {
            if(j == i)
            {
                trace += a.a[i][j];
            }
        }
    }
    return trace;
}
int main()
{
    Matranvuong a;
    input(a);
    cout << trace(a) << endl;
    return 0;
}