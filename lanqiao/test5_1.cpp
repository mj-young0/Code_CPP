/*
 * @程序名: test5_1
 * @功能:1. 创建两个包含5个整数元素一维数组a[5]、b[5]，及一个包含10个元素的数组c，实现以下操作（30分）：

（1）手动输入元素（数值范围在1-100之间）初始化两个数组中的元素。

（2）编写选择法排序函数order(int a[],int n)。将a、b两个数组元素按照升序排序，然后打印到屏幕。

（3）复制数组a，b元素依次填充数组c。 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-21 15:00:46
 * @LastEditTime: 2021-11-23 00:31:19
 * @版本: 1.0
 * @实验思路:声明a,b,c三个数组，通过while循环嵌套if判断对输入的数字进行合规判断，合规的话继续执行，不合规重新输入，
 * 函数order用选择排序法进行实现，利用for循环嵌套将a，b数组中的元素赋值给c数组。 
 */
#include <iostream>
using namespace std;
//将a、b两个数组元素按照升序排序，然后打印到屏幕。
void order(int a[], int n)
{
    int minIndex;
    for (int j = 0; j < n; j++)
    {
        minIndex = j;
        for (int i = j + 1; i < n; i++)
        {
            if (a[i] < a[minIndex])
            {
                minIndex = i;
            }
            if (minIndex != j)
            {
                int t;
                t = a[minIndex];
                a[minIndex] = a[j];
                a[j] = t;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[5], b[5], c[10];
    //判断输入数字是否符合要求
    while (true)
    {
        bool flag = true;
        cout << "请输入10个1~100的整数：" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < 5; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < 5; i++)
        {
            if (a[i] < 1 || a[i] > 100 || b[i] < 1 || b[i] > 100)
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
    order(a, 5);
    order(b, 5);
    //将a，b中的元素赋值到c中
    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i];
        c[i + 5] = b[i];
    }
    cout << "c[10]=";
    //输出c
    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}