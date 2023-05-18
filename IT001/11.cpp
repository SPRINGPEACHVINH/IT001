#include <iostream>
using namespace std;
int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    if (y <= 0)
    {
        cout << "Nam khong hop le.";
        return 0;
    }
    else
    {
        if (y % 4 == 0 && y % 100 != 0)
        {
            if (m > 12 || m < 1)
            {
                cout << "Thang khong hop le.";
                return 0;
            }
            else
            {
                if (m == 1 || m == 5 || m == 3 || m == 7 || m == 8 || m == 10 || m == 12)
                {
                    if (d < 1 || d > 31)
                    {
                        cout << d << "/" << m << "/" << y << " la ngay khong hop le.";
                        return 0;
                    }
                    else
                    {
                        cout << d << "/" << m << "/" << y << " la ngay hop le.";
                        return 0;
                    }
                }
                if (m == 4 || m == 6 || m == 9 || m == 11)
                {
                    if (d < 1 || d > 30)
                    {
                        cout << d << "/" << m << "/" << y << " la ngay khong hop le.";
                        return 0;
                    }
                    else
                    {
                        cout << d << "/" << m << "/" << y << " la ngay hop le.";
                        return 0;
                    }
                }
                if (m == 2)
                {
                    if (d < 1 || d > 29)
                    {
                        cout << d << "/" << m << "/" << y << " la ngay khong hop le.";
                        return 0;
                    }
                    else
                    {
                        cout << d << "/" << m << "/" << y << " la ngay hop le.";
                        return 0;
                    }
                }
            }
        }
        else
        {
            if (m > 12 || m < 1)
            {
                cout << "Thang khong hop le.";
                return 0;
            }
            else
            {
                if (m == 1 || m == 5 || m == 3 || m == 7 || m == 8 || m == 10 || m == 12)
                {
                    if (d < 1 || d > 31)
                    {
                        cout << d << "/" << m << "/" << y << " la ngay khong hop le.";
                        return 0;
                    }
                    else
                    {
                        cout << d << "/" << m << "/" << y << " la ngay hop le.";
                        return 0;
                    }
                }
                if (m == 4 || m == 6 || m == 9 || m == 11)
                {
                    if (d < 1 || d > 30)
                    {
                        cout << d << "/" << m << "/" << y << " la ngay khong hop le.";
                        return 0;
                    }
                    else
                    {
                        cout << d << "/" << m << "/" << y << " la ngay hop le.";
                        return 0;
                    }
                }
                if (m == 2)
                {
                    if (d < 1 || d > 28)
                    {
                        cout << d << "/" << m << "/" << y << " la ngay khong hop le.";
                        return 0;
                    }
                    else
                    {
                        cout << d << "/" << m << "/" << y << " la ngay hop le.";
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}