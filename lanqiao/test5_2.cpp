/*
 * @程序名: test5_2.cpp
 * @功能:使用new运算符创建具有10个元素的一维数组,实现以下操作（20分）：

（1） 编写子函数bubbleSort(int arr[],int x)实现用冒泡排序算法将数组升序排序。

（2） 统计在排序过程中元素有多少次交换。

 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-23 19:29:50
 * @LastEditTime: 2021-11-23 20:06:10
 * @版本: 1.0
 * @实验思路: 使用new运算符创建具有10个元素的一维数组,编写子函数bubbleSort(int arr[],int x)实现用冒泡排序算法将数组升序排序，
 * 用cout++记录交换次数
 */
#include <iostream>
using namespace std;
//用冒泡排序算法将数组升序排序
void bubbleSort(int arr[], int x)
{
    int count = 0;
    for (int j = 0; j < x; j++)
    {
        for (int i = 0; i < x - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int t;
                t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
                count++;
            }
        }
    }
    cout << "将数组升序排序：" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "排序过程中元素交换了" << count << "次。" << endl;
}
int main()
{
    //使用new运算符创建具有10个元素的一维数组
    int *p = new int[10];
    while (true)
    {
        bool flag = true;
        cout << "请输入10个1~100的整数：" << endl;
        for (int i = 0; i < 10; i++)
        {
            cin >> p[i];
        }

        for (int i = 0; i < 5; i++)
        {
            if (p[i] < 1 || p[i] > 100)
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    bubbleSort(p, 10);
    return 0;
}