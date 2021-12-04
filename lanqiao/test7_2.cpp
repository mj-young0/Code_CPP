/*
 * @程序名:test7_2.cpp 
 * @功能:定义抽象类Geometry;在此基础上派生出类Rectangle和Circle.二者都有计算对象周长函数double getPerim（） 
 * 计算面积的函数double 两者对象的周长和面积，测试动态多态性。可以在主函数中使用以下语句来测试类(50分)。 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-27 12:22:25
 * @LastEditTime: 2021-11-27 12:48:06
 * @版本: 1.0
 * @实验思路:按要求分别定义Geometry，Rectangle和Circle类，并实现其成员函数。
 */
#include <iostream>
using namespace std;
//抽象类Geometry
class Geometry
{
public:
    //纯虚函数计算周长
    virtual float getPerim() const = 0;
    //纯虚函数计算面积
    virtual float getS() const = 0;
};
//派生类Rectangle
class Rectangle : public Geometry
{
public:
    Rectangle(int nw, int nh) : w(nw), h(nh) {}
    ~Rectangle() {}
    float getPerim() const;
    float getS() const;

private:
    float w, h;
};
float Rectangle::getPerim() const
{
    return 2 * (w + h);
}
float Rectangle::getS() const
{
    return w * h;
}
//派生类Circle
class Circle : public Geometry
{
public:
    Circle(int nr) : r(nr) {}
    ~Circle() {}
    float getPerim() const;
    float getS() const;

private:
    const float PI = 3.14;
    float r;
};
float Circle::getPerim() const
{
    return 2 * PI * r;
}
float Circle::getS() const
{
    const float PI = 3.14;
    return PI * r * r;
}
void fun(Geometry *ptr)
{
    cout << "周长为：" << ptr->getPerim() << endl;
    cout << "面积为：" << ptr->getS() << endl;
}

int main()
{
    Rectangle x1(2, 3);
    cout << "Rectangle:" << endl;
    fun(&x1);

    Circle y1(5);
    cout << "Circle:" << endl;
    fun(&y1);

    return 0;
}