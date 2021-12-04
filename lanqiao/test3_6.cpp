/*
 * @程序名:test4_5.cpp
 * @功能: 定义一个复数类Complex，使得代码能够进行下面的工作：
 * @ ```
   @Complex c2 = 4.5;      //用实数4.5初始化c2
   @c1.add(c2);            //将c1与c2相加，结果保存在c1中
   @c1.show();             //将c1输出（这时的结果应该是7.5+5i 
   @ ```
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-13 13:46:03
 * @LastEditTime: 2021-11-14 20:27:41
 * @版本: 1.0
 * @实验思路: 创建一个Complex类，并实现相关类成员
 */
#include <iostream>
using namespace std;
class Complex
{
public:
    //构造函数
    Complex(float l, float r = 0) : l(l), r(r) {}
    //复制构造函数
    Complex(Complex &c)
    {
        l = c.l;
        r = c.r;
    }
    //传入一个复数，并将与原来复数相加
    void add(Complex c)
    {
        l = l + c.l;
        r = r + c.r;
    }
    //输出复数
    void show()
    {
        cout << l << "+" << r << "i" << endl;
    }

private:
    float l, r;
};
int main()
{
    Complex c1(3, 5);
    Complex c2 = 4.5;
    c1.add(c2);
    c1.show();
    return 0;
}