/*
 * @程序名: test3_3.cpp
 * @功能: 编写函数输出指定行数的星星等腰三角形。例如输入：5，得到以下图形。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-24 15:46:29
 * @LastEditTime: 2021-10-24 17:02:15
 * @版本: 1.0
 * @实验思路: 通过嵌套循环，分别输出每一行的空位和*
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "请输入一个正整数：";
    cin >> n;
    //输出n行
    for (int i = 1; i <= n; i++)
    {
        //每行输出10个空位
        for (int j = 1; j <= 10; j++)
        {
            cout << " ";
        }
        //每行依次输出n,···，4，3，2，1，0个空位
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        //每行依次输出1，3，5，7，9，···个*
        for (int n = 1; n <= 2 * i - 1; n++)
        {
            cout << "*";
        }
        //换行
        cout << endl;
    }
    return 0;
}