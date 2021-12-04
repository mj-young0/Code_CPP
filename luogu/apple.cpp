#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, v;
    int a, b, t, n;
    n = 8 * 60 + 24 * 60;
    t = ceil(s / v * 1.0) + 10;
    n = n - t;
    if (t >= 24 * 60)
        n -= 24 * 60;
    a = n / 60;
    b = n % 60;
    printf("%02d:%02d", a, b);
    return 0;
}