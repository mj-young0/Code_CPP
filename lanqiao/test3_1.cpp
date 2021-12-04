/*
 * @程序名:test4_1.cpp 
 * @功能: 设计点类 Point，能够表示平面当中的任意点 
 * （1）数据成员包括两点坐标(x,y),成员函数包括构造函数、析构函数、复制构造函数； 
 * （2）包括求点的坐标的公有接口函数，打印点坐标的成员函数，并在主函数中调用。 
 * （3）在主函数中实例化出两个点a(0,0),b(6,8),求出两点间的距离。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-31 12:25:23
 * @LastEditTime: 2021-10-31 13:06:17
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
public:
    Point(int xx = 0, int yy = 0)
    {
        x = xx;
        y = yy;
    }
    //复制构造函数
    Point(Point &p);
    //打印点坐标的成员函数
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    //析构函数
    ~Point() {}

private:
    int x, y;
};

//成员函数的实现
Point::Point(Point &p)
{
    x = p.x;
    y = p.y;
}

//主程序
int main()
{
    //初始化对象a，b
    Point a(0, 0);
    Point b(6, 8);
    cout << "a的x轴坐标为：" << a.getX() << "  a的y轴坐标为：" << a.getY() << endl;
    int distance = sqrt((a.getX() - b.getX()) * (a.getX() - b.getX()) + (a.getY() - b.getY()) * (a.getY() - b.getY()));
    cout << "a,b两点间的距离为：" << distance << endl;
    return 0;
}