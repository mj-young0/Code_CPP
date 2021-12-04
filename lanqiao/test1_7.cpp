/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-03 12:53:56
 * @LastEditTime: 2021-10-24 15:58:10
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 6; k++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 5; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 5 - i; k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= 6; l++)
        {
            cout << "*";
        }
        for (int m = 1; m <= 5; m++)
        {
            cout << "  ";
        }
        for (int n = 1; n <= 2 * i - 1; n++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}