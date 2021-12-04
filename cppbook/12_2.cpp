/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-19 14:01:43
 * @LastEditTime: 2021-11-19 14:10:24
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include<string>
using namespace std;
class MyException
{
public:
    MyException(const string &message):message(message){}
    ~MyException(){}
    const string &getMessage()const{return message;}
private:
    string message;
};
class Demo
{
public:
    Demo(){cout<<"Constructor of Demo"<<endl;}
    ~Demo(){cout<<"Destructor of Demo"<<endl;}
private:
    
};

void func() throw (MyException){
    Demo d;
    cout<<"Throw MyException in func()"<<endl;
    throw MyException("exception thrown by func()");
}
int main()
{
    cout<<"In main function"<<endl;
    try{
        func();
    }catch(MyException &e){
        cout<<"Caught an exception:"<<e.getMessage()<<endl;
    }
    cout<<"Resume the execution of main()"<<endl;
    return 0;
}