/*
 * @程序名:test3_9.cpp 
 * @功能: 编写三个同名的函数:getArea(…),它们之间形成重载，
 *        分别用于求圆的面积，矩形的面积，三角形面积。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-24 18:51:29
 * @LastEditTime: 2021-10-25 01:00:34
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include <cmath>
using namespace std;
//计算圆面积
int getArea(int r)
{
    int pi = 3.14;
    return pi * r * r;
}
//计算矩形面积
int getArea(int a, int b)
{
    return a * b;
}
//计算三角形面积
float getArea(int a, int b, float c)
{
    float s;
    s = 0.5 * (a + b + c);
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main()
{
    int i, r, a, b, c;
    cout << "计算圆面积请输入1，计算矩形面积请输入2，计算三角形面积请输入3." << endl;
    cin >> i;
    switch (i)
    {
    case 1:
        cout << "请输入圆半径：" << endl;
        cin >> r;
        cout << "圆面积是：" << getArea(r);
        break;
    case 2:
        cout << "请输入矩形长和宽：" << endl;
        cin >> a >> b;
        cout << "矩形面积是：" << getArea(a, b);
        break;
    case 3:
        cout << "请输入三角形底三边长：" << endl;
        cin >> a >> b >> c;
        cout << "三角形面积是：" << getArea(a, b, c);
        break;
    }

    return 0;
}