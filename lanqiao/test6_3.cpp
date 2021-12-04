/*
 * @程序名:test6_3.cpp 
 * @功能:定义一个基类BaseClass，它有公有成员函数func1()，func2(),函数内打印出类名及函数名，有私有数据成员int i。
 * 从它派生出类DerivedClass,有公有成员函数func1(),函数内打印出类名及函数名,私有数据成员int j,在主函数中分别
 * 用BaseClass及Derivedclass类的指针去调用func1(),func2，观察运行结果。要求：（20分）

（1）注意派生类的构造函数须写正确；

（2）分析通过指针调用成员函数的运行结果。 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-25 20:33:49
 * @LastEditTime: 2021-11-25 21:02:38
 * @版本: 1.0
 * @实验思路:按照要求分别创建BaseClass类和DerivedClass类，在主函数中创建BaseClass类的对象bc和Derivedclass类
 * 的对象dc，再将它们的地址分别赋值给BaseClass及Derivedclass类的指针p1和p2.用指针分别调用func1和func2.
 * BaseClass类的指针p1调用的func1()和func2()是BaseClass类的对应函数，Derivedclass类的指针p2调用的func1()是Derivedclass类
 * 的func1()，当p2调用func2()时，由于Derivedclass类没有定义与基类BaseClass类func2()同名的函数，所以p2调用
 * 了继承自BaseClass类的func2(),所以输出了BaseClass::func2。
 */
#include <iostream>
using namespace std;

class BaseClass
{
public:
    BaseClass(int ni) : i(ni) {}
    void func1()
    {
        cout << "BaseClass::func1" << endl;
    }
    void func2()
    {
        cout << "BaseClass::func2" << endl;
    }

private:
    int i;
};
class DerivedClass : public BaseClass
{
public:
    DerivedClass(int ni, int nj) : BaseClass(ni), j(nj) {}
    void func1()
    {
        cout << "DerivedClass::func1" << endl;
    }

private:
    int j;
};
int main()
{
    BaseClass bc(1);
    DerivedClass dc(1, 2);
    BaseClass *p1 = &bc;
    DerivedClass *p2 = &dc;
    p1->func1();
    p1->func2();
    p2->func1();
    p2->func2();
    return 0;
}