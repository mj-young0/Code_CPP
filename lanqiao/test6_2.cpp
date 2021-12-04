/*
 * @程序名: test6_2.cpp
 * @功能:设计一个基类：学生类（Student），采用公有继承的方式派生出一个研究生类（PostGraduate），要求：（20分）

（1）Student类中包含：学号、姓名、性别、专业。

（2）要求在PostGraduate类中增加导师（tutor）、津贴（allowance）、研究方向（researchArea）。

（3）两个类中都包含：display()函数，用于输出本类中的成员信息。 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-24 21:48:23
 * @LastEditTime: 2021-11-25 20:15:46
 * @版本: 1.0
 * @实验思路:先创建基类Student，再创建派生类PostGraduate，PostGraduate类的构造函数的实现，要初始化基类的参数列表
 */
#include <iostream>
using namespace std;
//创建学生类
class Student
{
public:
    Student(int newId, string newName, string newGender, string newSubject)
    {
        id = newId;
        name = newName;
        gender = newGender;
        subject = newSubject;
    }

    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getGender()
    {
        return gender;
    }
    string getSubject()
    {
        return subject;
    }

    void display();

private:
    int id;         //学号
    string name;    //姓名
    string gender;  //性别
    string subject; //专业
};

void Student::display()
{
    cout << "学号:" << id << "\t姓名:" << name << "\t性别:" << gender << "\t专业:" << subject << endl;
}
//创建派生类PostGraduate
class PostGraduate : public Student
{
public:
    //派生类构造函数的实现
    PostGraduate(string tutor, float allowance, string researchArea, int newId, string newName, string newGender, string newSubject) : Student(newId, newName, newGender, newSubject)
    {
        this->tutor = tutor;
        this->allowance = allowance;
        this->researchArea = researchArea;
    }
    void display();

private:
    string tutor;
    float allowance;
    string researchArea;
};
void PostGraduate::display()
{
    cout << "导师:" << tutor << "\t津贴:" << allowance << "\t研究方向:" << researchArea << "\t学号:" << getId() << "\t姓名:" << getName() << "\t性别:" << getGender() << "\t专业:" << getSubject() << endl;
}

int main()
{
    Student s1(20190001, "Michael", "Male", "Computer Science");
    //参数分别为：学号，姓名，性别，专业
    s1.display();

    PostGraduate p1("Liu", 1000, "Deep learning", 20170001, "李逍遥", "男", "软件工程"); //导师：“Liu”,津贴：“1000”,研究方向：“Deep learning”

    p1.display();
    return 0;
}