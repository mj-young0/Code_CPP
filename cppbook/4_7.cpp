/*
 * @程序名: 
 * @功能: 用结构体表示学生的基本信息
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-15 12:07:45
 * @LastEditTime: 2021-10-19 13:48:18
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

struct Student
{
    int num;
    string name;
    char sex;
    int age;
};


int main()
{
    Student stu = {97001,"Lin Lin",'F',19};
    cout<<"num: "<<stu.num<<endl;
    cout<<"name: "<<stu.name<<endl;
    cout<<"sex: "<<stu.sex<<endl;
    cout<<"age: "<<stu.age<<endl;
    return 0;
}