#include <iostream>
using namespace std;
void nhapmang(int A[], int x)
{
    for (int i = 0; i < x; i++)
    {
        cin >> A[i];
    }
}
int main()
{
    int a[100], b[100], c[100], m, n;
    cin >> m;
    nhapmang(a, m);
    cin >> n;
    nhapmang(b, n);
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i < m)
    {
        c[k++] = a[i++];
    }
    while (j < n)
    {
        c[k++] = b[j++];
    }
    for (int h = 0; h < k; h++)
    {
        cout << c[h] << " ";
    }
}