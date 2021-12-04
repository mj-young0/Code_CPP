/*
 * @程序名:test8_2.cpp 
 * @功能:定义函数void yanghuiTriangle(int n)实现图所示杨辉三角形输出。
 * 在主函数中输出n=8的杨辉三角形，并利用输入流读取本程序，将代码在屏幕逐行输出。 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-27 13:51:24
 * @LastEditTime: 2021-11-28 21:04:00
 * @版本: 1.0
 * @实验思路: 使用一个二维数组存入杨辉三角每一行的数据，然后遍历打印到屏幕。定义输入流对象is，使输入
 * 流对象与“test8_2.cpp”建立联系，使用tellg()函数得到文件末尾数据的指针的位置size，定义字符串str将
 * 其字符串末尾指针指定为size,调用seekg()函数将将文件中下一个将要读取的数据的位置的内部指针设置为开头。
 * 调用read()函数将输入流对象is中的数据读到字符串str中。最后cout字符串str。
 */
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
//在屏幕上打印出杨辉三角
void yanghuiTriangle(int n)
{
    int arr[100][100];
    arr[0][0] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;
    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                arr[i][j] = 1;
            }
            if (j == i)
            {
                arr[i][j] = 1;
            }
            if (j != 0 && j != i)
            {
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == i)
            {
                cout << arr[i][j];
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    yanghuiTriangle(8);
    // 读取整个文件到 string
    ifstream is{"test8_2.cpp", std::ios::binary | std::ios::ate};
    if (is)
    {
        streampos size = is.tellg(); //得到当前文件读指针的位置，即文件末尾数据的指针的位置
        string str(size, '\0');      // 构造 string 为流大小
        is.seekg(0);                 //将文件中下一个将要读取的数据的位置的内部指针设置为开头
        if (is.read(&str[0], size))
            cout << str << endl;
    }

    return 0;
}