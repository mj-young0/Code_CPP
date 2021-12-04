/*
 * @程序名: 4_2.cpp
 * @功能: 设计一个Student类
 *（1）基本信息：学号、姓名、性别、出生日期、院系、专业； 数据成员中：“日期”要声明为一个内嵌子对象
 *（2）Student类要包含：构造函数、内联成员函数、带默认参数的构造函数、复制构造函数
 *（3）成员函数基本功能有：
 * A）可以从键盘输入学生的基本信息；
 * B）定义一个函数setInfo(形参表)，可以修改学生的一些基本信息函数，例如：姓名，学号可以作修改；
 * C）包括成员函数void show()显示学生信息； 
 *【提示】 注意带默认参数值的构造函数的声明与定义； 从键盘输入基本信息，调用带参数的构造函数生成学生对象； 不同类型的信息须使用合理的变量类型，姓名、院系等可定义为字符串，使用string来定义。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-31 13:13:12
 * @LastEditTime: 2021-11-14 23:21:36
 * @版本: 1.0
 * @实验思路: 创建Student 和Birthday两个类，声明相应的变量，并创建构造函数。再将Birthday类的一个对象嵌入Student类中。
 */
#include <iostream>
#include <string>
using namespace std;

class Birthday
{
public:
    //构造函数
    Birthday(int newYear = 0, int newMonth = 0, int newDay = 0)
    {
        year = newYear;
        month = newMonth;
        day = newDay;
    }
    //复制构造函数
    Birthday(Birthday &b);
    int getYear() { return year; }
    int getMonth() { return month; }
    int getday() { return day; }

private:
    int year, month, day;
};

//复制构造函数的实现
Birthday::Birthday(Birthday &b)
{
    year = b.year;
    month = b.month;
    day = b.day;
}

class Student
{
public:
    Student(int newId, string newName, string newGender, Birthday newBirthday, string newFaculty, string newSubject)
    {
        id = newId;
        name = newName;
        gender = newGender;
        birthday = newBirthday;
        faculty = newFaculty;
        subject = newSubject;
    }

    Student(Student &stu);
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
    Birthday getBirthday()
    {
        return birthday;
    }
    string getFaculty()
    {
        return faculty;
    }
    string getSubject()
    {
        return subject;
    }

    void setInfo(int id, string name, string gender, Birthday Birthday, string faculty, string subject);
    void show();

private:
    int id;            //学号
    string name;       //姓名
    string gender;     //性别
    Birthday birthday; //出生日期(内嵌子对象)
    string faculty;    //院系
    string subject;    //专业
};

void Student::setInfo(int id1, string name1, string gender1, Birthday birthday1, string faculty1, string subject1)
{
    id = id1;
    name = name1;
    gender = gender1;
    birthday = birthday1;
    faculty = faculty1;
    subject = subject1;
}
void Student::show()
{
    cout << "学号:" << id << "\t姓名:" << name << "\t性别:" << gender << "\t出生日期:"
         << birthday.getYear() << "-" << birthday.getMonth() << "-" << birthday.getday() << "\t院系:" << faculty << "\t专业:" << subject << endl;
}

//复制构造函数的实现
Student::Student(Student &stu)
{
    id = stu.id;
    name = stu.name;
    gender = stu.gender;
    birthday = stu.birthday;
    faculty = stu.faculty;
    subject = stu.subject;
}

int main()
{
    Birthday birthday1(1111, 11, 11);
    Birthday birthday2(2003, 11, 11);
    Birthday birthday3(2002, 7, 23);
    Student stu1(2021250, "张三", "男", birthday1, "软件学院", "软件工程");
    Student stu2(2021250, "李四", "男", birthday2, "软件学院", "软件工程");
    stu1.show();
    stu1.setInfo(2021250111, "张三丰", "男", birthday3, "软件学院", "软件工程");
    stu1.show();
    stu2.show();
    return 0;
}