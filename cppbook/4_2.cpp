/*
 * @程序名: 4_2.cpp
 * @功能: 复制构造函数的三种应用
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-10 13:20:15
 * @LastEditTime: 2021-10-10 14:32:03
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
class Point
{
public:
    Point(int xx = 0, int yy = 0)
    {
        x = xx;
        y = yy;
    }
    Point(Point &p);//复制构造函数
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }

private:
    int x, y;
};

//成员函数的实现
Point::Point(Point &p)
{
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor" << endl;
}
//形参为point对象的函数
void fun1(Point p)
{
    cout << p.getX() << endl;
}
//返回值为Point类对象的函数
Point fun2()
{
    Point a(1, 2);
    return a;
}
//主程序
int main()
{
    Point a(4, 5); //第一个对象a
    Point b = a;   //情况一，用a初始化b。第一次调用复制构造函数
    cout << b.getX() << endl;
    fun1(b);    //情况二，对象b作为fun1函数的实参第二次调用复制构造函数
    b = fun2(); //情况三，函数的返回值是类对象，函数返回时，调用复制构造函数
    cout << b.getX() << endl;
    return 0;
}