#include <iostream>
using namespace std;
int main()
{
    float a[100][100], b[100][100];
    float pro[100][100] = {};
    int m, n, l, k;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> l >> k;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> b[i][j];
        }
    }
    if (l != n)
        return 0;
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < k; j++)
            {
                for (int h = 0; h < n; h++)
                {
                    pro[i][j] = pro[i][j] + a[i][h] * b[h][j];
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < k; j++)
            {
                cout << pro[i][j] << " ";
            }
            cout << endl;
        }
    }
}