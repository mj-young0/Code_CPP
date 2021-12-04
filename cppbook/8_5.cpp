/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-23 13:35:49
 * @LastEditTime: 2021-11-23 13:45:31
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
class Base
{
public:
    virtual ~Base();

private:
};
Base::~Base()
{
    cout << "Base destructor" << endl;
}
class Derived : public Base
{
public:
    Derived();
    ~Derived();

private:
    int *p;
};
Derived::Derived()
{
    p = new int(0);
}
Derived::~Derived()
{
    cout << "Derived destructor" << endl;
    delete p;
}
void fun(Base *b)
{
    delete b;
}
int main()
{
    Base *b = new Derived();
    fun(b);
    return 0;
}