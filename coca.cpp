#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int index = s[n-1];
    if (s[0] == s[n-1])
    {
        cout << "Lose";
        return 0;
    }
    else
    {
        for (int i = n-2; i >= 0; i--)
        {
            if (s[i] != index)
            {
                cout << "Win";
                return 0;
            }
        }
    }
}