/*
 * @程序名:具有静态数据成员的Point类
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-22 11:46:49
 * @LastEditTime: 2021-10-22 12:23:42
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
class Point
{
public:
    Point(int x = 0, int y = 0) : x(x), y(y)
    {
        //在构造函数中对count累加，所有对象共同维护同一个cout
        count++;
    }
    Point(Point &p)
    {
        x = p.x;
        y = p.y;
        count++;
    }
    ~Point() { count--; }
    int getX() { return x; }
    int getY() { return y; }
    void showCount()
    {
        cout << "Object count=" << count << endl;
    }

private:
    int x, y;
    static int count;                //静态数据成员变量声明，用于记录点的个数
    constexpr static int origin = 0; //常量静态成员类内初始化
};
int Point::count = 0;        //静态数据成员定义和初始化，使用类名限定
constexpr int Point::origin; //类外定义常量静态成员，但不可二次初始化
int main()
{
    Point a(4, 5);
    cout << "Point A:" << a.getX() << "," << a.getY();
    a.showCount();
    Point b(a);
    cout << "Point B:" << b.getX() << "," << b.getY();
    b.showCount();
    return 0;
}