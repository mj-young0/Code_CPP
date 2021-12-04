/*
 * @程序名:test3_4.cpp 
 * @功能: 4. 编写函数实现从键盘输入一个1000以内正整数，将其按照二进制进行输出。例如，将135打印成10000111.

 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-24 16:09:07
 * @LastEditTime: 2021-10-24 16:55:20
 * @版本: 1.0
 * @实验思路: 利用递归不断取得十进制数的余数，将余数存入一个数组中，将数组倒叙遍历，得到二进制数
 */
#include <iostream>
using namespace std;
//将一个十进制数转换为二进制数
void output(int num)
{
    int temp, i = 0;
    int arr[32];
    if (num != 0)
    {
        //除2取余数
        temp = num % 2;
        //除2取商
        num = num / 2;
        i++;
        //继续执行上面两步
        output(num);
        //将余数存入arr数组中
        arr[i] = temp;
    }
    //倒序遍历arr数组，得到二进制数
    for (int j = i; j > 0; j--)
    {
        cout << arr[j];
    }
}
int main()
{
    cout << "输入一个1000以内正整数：";
    int n;
    cin >> n;
    if (n <= 0 || n > 1000)
    {
        cout << "输入有误，输入一个1000以内正整数：";
    }
    else
    {
        output(n);
    }
    return 0;
}