/*
 * @程序名:test4_3.cpp
 * @功能:定义一个Circle类，有数据成员radius(半径),成员函数getArea(),计算圆的面积，
 * 构造一个Circle的对象进行测试。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-31 21:51:55
 * @LastEditTime: 2021-10-31 22:05:09
 * @版本: 1.0
 * @实验思路: 太简单了，不知道写啥QAQ
 */
#include <iostream>
using namespace std;

class Circle
{
public:
    Circle(float r)
    {
        radius = r;
    }
    float getR()
    {
        return radius;
    }
    float getAera();

private:
    const float PI = 3.14;
    float radius;
};
float Circle::getAera()
{
    return PI * radius * radius;
}
int main()
{
    Circle c(5);
    cout << "圆的面积是：" << c.getAera();
    return 0;
}