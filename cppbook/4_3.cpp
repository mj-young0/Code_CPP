/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-10 20:22:00
 * @LastEditTime: 2021-10-10 20:57:53
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
//给出Pi的值
const float PI = 3.1416;
//栅栏的单价
const float FENCE_PRICE = 35;
//国道水泥的单价
const float CONCRETE_PRICE = 20;
//声明定义类的Circle
class Circle
{
    //外部接口
public:
    //构造函数
    Circle(float r);
    //计算圆的周长
    float circumference();
    //计算圆的面积
    float area();
    //私有数据成员
private:
    //圆半径
    float radius;
};
//类的实现

//构造函数初始化数据成员radius
Circle::Circle(float r)
{
    radius = r;
}
//计算圆的周长
float Circle::circumference()
{
    return 2 * radius * PI;
}
//计算圆的面积
float Circle::area()
{
    return radius * radius * PI;
}
//主函数的实现
int main()
{
    //提示用户输入半径
    cout << "请输入半径：" << endl;
    float radius;
    cin >> radius;
    //游泳池边界
    Circle pool(radius);
    //栅栏边界
    Circle poolRim(radius + 3);
    //计算栅栏造价并输出
    float fenceCast = poolRim.circumference() * FENCE_PRICE;
    cout << "栅栏的造价是：" << fenceCast << endl;
    //计算过道造价并输出
    float concreteCast = (poolRim.area() - pool.area()) * PI;
    cout << "过道的造价是：" << concreteCast << endl;
    return 0;
}