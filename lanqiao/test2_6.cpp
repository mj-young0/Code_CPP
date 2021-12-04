/*
 * @程序名: test3_6.cpp
 * @功能: 编写函数输出某整数的所有因子（能够整除该数），实现从键盘输入一个整数，
 *       输出其全部因子。例如，输入6，则输出1，2，3，6。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-24 17:43:46
 * @LastEditTime: 2021-10-24 17:53:51
 * @版本: 1.0
 * @实验思路: 太简单不知道该写啥QAQ
 */
#include <iostream>
using namespace std;

int main()
{
    int a,i;
    cout<<"请输入一个正整数：";
    cin>>a;
    for(i=1;i<=a;i++){
        if(a%i==0){
            cout<<i<<",";
        }
    }
    return 0;
}