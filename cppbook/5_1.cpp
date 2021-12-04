/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-22 13:01:15
 * @LastEditTime: 2021-10-22 13:02:17
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
int i;
int main()
{
    i = 5;
    {
        int i;
        i = 7;
        cout << "i=" << i << endl;
    }
    cout << "i=" << i << endl;
    return 0;
}