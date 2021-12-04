#include <iostream>
using namespace std;
int main()
{
    char s[13];
    int h = 0, k = 0, c;
    cin >> s;
    for (int i = 0; i <= 11; i++)
    {
        if (s[i] != '-')
        {
            k++;
            h += k * (s[i] - '0');
        }
    }
    h %= 11;
    if (h == 10)
    {
        c = 'X';
    }
    else
    {
        c = h + '0';
    }
    if (c == s[12])
    {
        cout << "right";
    }
    else
    {
        s[12] = c;
        cout << s;
    }
    return 0;
}