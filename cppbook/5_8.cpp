/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-22 13:37:28
 * @LastEditTime: 2021-10-22 13:44:48
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
class A
{
public:
    A(int i);
    void print();
private:
    const int a;
    static const int b;
};

const int A::b=10;      //静态数据成员在类外说明和初始化

//常数据成员只能通过初始化列表来获得初值
A::A(int i):a(i){}

void A::print(){
    cout<<a<<":"<<b<<endl;
}

int main()
{
    A a1(100),a2(0);
    a1.print();
    a2.print();    
    return 0;
}