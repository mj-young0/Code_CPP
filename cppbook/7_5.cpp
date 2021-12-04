/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-09 13:45:23
 * @LastEditTime: 2021-11-09 13:54:24
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
class Base1
{   
public:
    Base1(int i){cout<<"Constructing Base1"<<i<<endl;}
    ~Base1(){cout<<"Destructing Base1"<<endl;}
    
};
class Base2
{   
public:
    Base2(int j){cout<<"Constructing Base2"<<j<<endl;}
    ~Base2(){cout<<"Destructing Base2"<<endl;}
    
};
class Base3
{   
public:
    Base3(){cout<<"Constructing Base3*"<<endl;}
    ~Base3(){cout<<"Destructing Base3"<<endl;}
    
};
class Derived:public Base2,public Base1,public Base3
{
public:
    Derived(int a,int b,int c,int d):Base1(a),member2(d),member1(c),Base2(b){}
private:
    Base1 member1;
    Base2 member2;
    Base3 member3;
};
int main()
{
    Derived obj(1,2,3,4);
    return 0;
}   