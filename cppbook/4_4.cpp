/*
 * @程序名: 4_4.cpp
 * @功能: 类的组合，线段（Line）类
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-12 10:36:22
 * @LastEditTime: 2021-10-14 12:12:53
 * @版本: 1.0
 * @实验思路: 这个问题可以用类的组合来解决，使Line类包括Point类（见4_3.cpp）的类的两个对象p1和p2,作为其
 * 数据成员。Line类具有计算线段长度的功能，在构造函数中实现。 
 */
#include <iostream>
#include <cmath>
using namespace std;

//Point类定义
class Point
{
public:
    Point(int xx = 0, int yy = 0)
    {
        y = xx;
        x = yy;
    }
    Point(Point &p)
    {
        x = p.x;
        y = p.y;
        cout << "Calling the copy constructor of Point" << endl;
    }
    int getX() { return x; }
    int getY() { return y; }

private:
    int x, y;
};
//复制构造函数的实现
//类的组合
//Line类的定义
class Line
{
public:
    Line(Point xp1, Point xp2) : p1(xp1), p2(xp2)
    {
        cout << "Calling constructor of Line" << endl;
        double x = static_cast<double>(p1.getX() - p2.getX());
        double y = static_cast<double>(p1.getY() - p2.getY());
        len = sqrt(x * x + y * y);
    }
    Line(Line &l) : p1(l.p1), p2(l.p2)
    {
        cout << "Calling the copy constructor of Line" << endl;
        len = l.len;
    }
    double getLen() { return len; }

private:
    Point p1, p2;
    double len;
};

//主函数
int main()
{
    //建立Piont类的对象
    Point myp1(1, 1), myp2(4, 5);
    //建立Line类的对象
    Line line(myp1, myp2);
    //利用复制构造函数建立一个新对象
    Line line2(line);
    cout << "The length of the line is:";
    cout << line.getLen() << endl;
    cout << "The length of the line2 is:";
    cout << line2.getLen() << endl;
    
    return 0;
}