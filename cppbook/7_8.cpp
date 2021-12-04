/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-12 12:29:58
 * @LastEditTime: 2021-11-12 12:32:13
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
class Base0
{
public:
    int var0;
    void fun0(){cout<<"Member of Base0"<<endl;}
};
class Base1:virtual public Base0
{
public:
    int var1;
};
class Base2:virtual public Base0
{
public:
    int var2;
};
class Derived:public Base1,public Base2{
    public:
    int var;
    void fun(){cout<<"Member of Derived"<<endl;}
};
int main()
{
    Derived d;
    d.var0 = 2;
    d.fun0() ;
    return 0;
}   