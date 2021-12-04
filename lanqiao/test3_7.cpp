/*
 * @程序名:test4_7.cpp
 * @功能:设计内嵌点类对象的组合类——矩形类Rectangle，私有属性包含平面上矩形左下角的一个点Point px;
 * 和矩形的宽度、高度：int width,height;公有成员函数包含求矩形面积的函数；
 * 在主函数中测试这个组合类，创建对象并求其面积。
 * 【提示】 组合类的设计可参照书中例题；构造函数的实现须使用初始化参数列表的形式。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-13 14:12:56
 * @LastEditTime: 2021-11-13 15:10:55
 * @版本: 1.0
 * @实验思路:使用Point类来表示左下角端点，定义变量 int width,height表示高度，用width * height求得面积
 */
#include <iostream>
#include <cmath>
using namespace std;

//Point类定义
class Point
{
public:
    Point(int xx = 0, int yy = 0) : x(xx), y(yy) {}
    Point(Point &p);
    int getX() { return x; }
    int getY() { return y; }

private:
    int x, y;
};
Point::Point(Point &p)
{
    x = p.x;
    y = p.y;
}
//矩形类Rectangle
class Rectangle
{
public:
    Rectangle(Point point, int width, int height);
    Rectangle(Rectangle &rec);
    float getS() { return s; };
    int getWidth() { return width; }
    int getHeight() { return height; }

private:
    Point p;
    int width, height;
    float s;
};
Rectangle::Rectangle(Point xp, int nWidth, int nHeight) : p(xp), width(nWidth), height(nHeight)
{
    s = width * height;
}
Rectangle::Rectangle(Rectangle &rec) : p(rec.p), width(rec.width), height(rec.height)
{
    s = rec.s;
}

int main()
{
    Point myPoint(1, 1);
    Rectangle rec(myPoint, 3, 4);
    cout << "长方形面积为：" << rec.getS();
    return 0;
}