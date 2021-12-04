#include <iostream>
using namespace std;
int main()
{
    int i = 0, j = 0, n;
    cout << "请输入一个整数：" << endl;
    cin >> n;
    while (n != 0)
    {
        if (n > 0)
        {
            i+=1;
        }
        else
        {
            j+=1;
        }
        cin>>n;
    }
    cout << "正整数的个数是" << i << endl;
    cout << "负整数的个数是" << j << endl;
    return 0;
}