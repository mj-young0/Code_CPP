/*
 * @程序名: 
 * @功能:使用联合体保存成绩信息，并输出 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-15 12:14:57
 * @LastEditTime: 2021-10-15 12:51:24
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include<string>
using namespace std;

class ExamInfo{
public:
    ExamInfo(string name,char grade)
        :name(name),mode(GRADE),grade(grade){}
    ExamInfo(string name,bool pass)
        :name(name),mode(PASS),pass(pass){}
    ExamInfo(string name,int persent)
        :name(name),mode(PERCENTAGE),persent(persent){}
    void show();
private:
    string name;
    enum{
        GRADE,
        PASS,
        PERCENTAGE
    }mode;
    union{
        char grade;
        bool pass;
        int persent;
    };
};

void ExamInfo::show(){
    cout<<name<<":";
    switch (mode)
    {
    case GRADE:cout<<grade;
        break;
    case PASS:cout<<(pass?"PASS":"FALL");
        break;
    case PERCENTAGE:cout<<persent;
        break;
    }
    cout<<endl;
}

int main()
{
    ExamInfo course1("English",'B');
    ExamInfo course2("Calculus",true);
    ExamInfo course3("C++Programming",85);
    course1.show();
    course2.show();
    course3.show();
    return 0;
}