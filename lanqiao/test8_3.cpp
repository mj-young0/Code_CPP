/*
 * @程序名:test8_3.cpp 
 * @功能:编写函数sort(int a[],int n)对整形数组a[10] = {19, 32, 45, 51, 71, 23, 38, 11, 17, 8}升序排序，
 * 并将排序结果写入磁盘文件f3.dat中。 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-27 14:11:24
 * @LastEditTime: 2021-11-27 14:27:31
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include <fstream>
using namespace std;
void sort(int arr[], int x)
{
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
            }
        }
    }
}
int main()
{
    int a[10] = {19, 32, 45, 51, 71, 23, 38, 11, 17, 8};
    sort(a, 10);
    //构造输出流对象
    ofstream os("f3.dat", ios_base::app);
    for (int i = 0; i < 10; i++)
    {
        os << a[i] << " ";
    }
    os.close();
    return 0;
}