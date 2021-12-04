/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-23 12:48:08
 * @LastEditTime: 2021-11-23 12:53:38
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
class Base1
{
public:
    virtual void display() const;
private:
    
};
void Base1::display()const {
    cout<<"Base1::display()"<<endl;
}
class Base2:public Base1
{
public:
    virtual void display() const;
private:
    
};
void Base2::display()const {
    cout<<"Base2::display()"<<endl;
}
class Derived:public Base2
{
public:
    virtual void display() const;
private:
    
};
void Derived::display()const {
    cout<<"Derived::display()"<<endl;
}
void fun(Base1 *ptr){
    ptr->display();
}
int main()
{
    Base1 base1;
    Base2 base2;
    Derived derived;
    fun(&base1);
    fun(&base2);
    fun(&derived);
    return 0;
}   
