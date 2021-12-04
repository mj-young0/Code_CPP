#include <iostream>
using namespace std;
int common(int n, int k)
{
    if (n < k)
        return 0;
    else if (n == 1 || k == 0)
        return 1;
    else
        return common(n - 1, k) + common(n - 1, k - 1);
}

int main()
{
    cout << "请输入两个正整数" << endl;
    int n, k;
    cin >> n >> k;
    cout << "c(n,k)=" << common(n, k);
    return 0;
}