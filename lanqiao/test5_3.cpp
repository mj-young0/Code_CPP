/*
 * @程序名: test5_3.cpp
 * @功能:创建点的对象数组，包含10个点，编写函数对数组元素排序（按照各点距离原点的远近排列），
 * 在主函数中输出排序后的点及其距离值（30分）。
10个点的坐标分别为： (-1,-3),(-2,-4),(1,3),(7,8),(-2,5),(3,-4),(5,3),(1,7),(6,3),(4,4) 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-23 20:07:41
 * @LastEditTime: 2021-11-23 20:42:01
 * @版本: 1.0
 * @实验思路: 先创建Point类，使用new内存动态分配创建点的对象数组，并用move()函数存入10个点坐标，
 * 创建dist（）函数计算点到原点的距离，创建sort（）函数对对象数组排序
 */
#include <iostream>
#include <cmath>
using namespace std;
//创建点的对象
class Point
{
public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}
    ~Point() {}
    int getX() const { return x; }
    int getY() const { return y; }
    void move(int newX, int newY)
    {
        x = newX;
        y = newY;
    }

private:
    int x, y;
};
//计算点到原点的距离
float dist(Point &p)
{
    float len = sqrt(p.getX() * p.getX() + p.getY() * p.getY());
    return len;
}
//对数组元素排序（按照各点距离原点的远近排列）
void sort(Point arr[], int x)
{
    for (int j = 0; j < x; j++)
    {
        for (int i = 0; i < x - 1; i++)
        {
            if (dist(arr[i]) > dist(arr[i + 1]))
            {
                Point t;
                t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }
        }
    }
    cout << "将数组对象升序排序：" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "(" << arr[i].getX() << "," << arr[i].getY() << ")"
             << " ";
    }
    cout << endl;
}
int main()
{
    //创建点的对象数组
    Point *ptr = new Point[10];
    //往数组里存入10个点坐标
    ptr[0].move(-1, -3);
    ptr[1].move(-2, -4);
    ptr[2].move(1, 3);
    ptr[3].move(7, 8);
    ptr[4].move(-2, 5);
    ptr[5].move(3, -4);
    ptr[6].move(5, 3);
    ptr[7].move(1, 7);
    ptr[8].move(6, 3);
    ptr[9].move(4, 4);
    sort(ptr, 10);
    return 0;
}