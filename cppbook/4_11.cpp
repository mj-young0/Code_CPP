/*
 * @程序名: 
 * @功能: 设计一个结构体存储学生的成绩信息，需要包括学号、年级和成绩三项内容，学号的范围是
 * 0~99999999，年级分为freshman、sophomore、junior、senior四种，成绩包括A、B、C、D四个等级。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-15 13:54:01
 * @LastEditTime: 2021-10-19 11:52:16
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;

enum Level{FRESHMAN,SOPHOMORE,JUNIOR,SENIOR};
enum Grade{A,B,C,D};
class Student{
public:
    Student(unsigned number,Level level,Grade grade)
        :number(number),level(level),grade(grade){}
        void show();
private:
    unsigned number:27;
    Level level:2;
    Grade grade:2;
};

void Student ::show(){
    cout<<"number:  "<<number<<endl;
    cout<<"Level   ";
    switch(level){
        case FRESHMAN:cout<<"freshman";break;
        case SOPHOMORE:cout<<"sophomore";break;
        case JUNIOR:cout<<"junior";break;
        case SENIOR:cout<<"senior";break;
    }
    cout<<endl;
    cout<<"Grade:  ";
    switch(grade){
        case A:cout<<"A";break;
        case B:cout<<"B";break;
        case C:cout<<"C";break;
        case D:cout<<"D";break;
    }
    cout<<endl;
}

int main()
{
    Student s(12345678,SOPHOMORE,B);
    cout<<"Size of Student:"<<sizeof(Student)<<endl;
    s.show(); 
    return 0;
}