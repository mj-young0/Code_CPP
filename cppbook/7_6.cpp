/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-09 14:04:11
 * @LastEditTime: 2021-11-09 14:10:38
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;

class Base1
{
public:
    int var;
    void fun(){
        cout<<"Menber of Base1"<<endl;
    }

};
class Base2
{
public:
    int var;
    void fun(){
        cout<<"Menber of Base2"<<endl;
    }

};
class Derived:public Base1,public Base2
{
public:
    int var;
    void fun(){cout<<"Member of Derived"<<endl;}
private:
    
};

int main()
{
    Derived d;
    Derived *p =&d;
    d.var=1;
    d.fun();
    d.Base1::var=2;
    d.Base1::fun();
    p->Base2::var=3;
    p->Base2::fun();
    return 0;
}   