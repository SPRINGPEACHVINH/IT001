#include <iostream>
using namespace std;
void nhapmang(float A[][100], int &x, int &y)
{
    cin >> x >> y;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            cin >> A[i][j];
        }
    }
}
void summatrix(float a[][100], float b[][100], int m, int n, int p, int q)
{
    float arr[100][100];
    int row, column;
    if (m > p)
        row = m;
    row = p;
    if (n > q)
        column = n;
    column = q;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            arr[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    float a[100][100];
    float b[100][100];
    int m, n, p, q;
    nhapmang(a, m, n);
    nhapmang(b, p, q);
    summatrix(a, b, m, n, p, q);
}