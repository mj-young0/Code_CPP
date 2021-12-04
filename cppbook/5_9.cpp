/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-22 13:55:44
 * @LastEditTime: 2021-10-22 14:05:10
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    int getX() { return x; }
    int getY() { return y; }
    friend float dist(const Point &p1, const Point &p2);

private:
    int x, y;
};

float dist(const Point &p1, const Point &p2)
{
    double x = p1.x - p2.x;
    double y = p1.y - p2.y;
    return static_cast<float>(sqrt(x * x + y * y));
}
int main()
{
    const Point myp1(1, 1), myp2(4, 5);
    cout << "The distance is:";
    cout << dist(myp1, myp2) << endl;
    return 0;
}