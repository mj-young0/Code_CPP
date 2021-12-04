/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-13 20:16:19
 * @LastEditTime: 2021-11-15 23:54:57
 * @版本: 1.0
 * @实验思路: 
 */
/*
 * @程序名: test4_1.cpp
 * @功能:设计一个Grade类,判定学生某个考试的级别，全部操作在类Grade中实现（30分）。要求：
（1）在定义对象时指定学生姓名和分数。且姓名必须指定，分数可缺省，缺省值为0分。要求包含构造函数、复制构造函数、姓名用string类型来定义。
主函数中实例化6个学生对象的姓名和分数分别为：
 Sun l00
 Wu 90
 Jiang 52
 Zhou 0
 He 76
 Liu 88
（2） 编写一个私有成员函数getGrade()，判定学生成绩的等级（60分以下为E等，[60-70)分为D等，[70-80)为C等，[80-90)为B等，[90-100]分为A等）。
（3）编写一个常成员函数getInfo()输出结果，包含学生姓名、分数、等级。
（4）定义静态数据成员count，用于统计总的学生人数，并在主函数中输出。
（5）定义该类的友元函数compare(Grade &m,Grade &n)，比较两个学生成绩的高低，输出成绩高的那个学生信息。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-13 20:16:19
 * @LastEditTime: 2021-11-13 20:16:20
 * @版本: 1.0
 * @实验思路: 设计Grade类，声明两个私有变量name和grade,声明一个静态变量count用来计数学生人数，在类内实现构造函数和复制构造函数。根据题目要求
 * 实现相应的函数。
 */
#include <iostream>
using namespace std;
class Grade
{
public:
    Grade(string nName, float nGrade = 0) : name(nName), grade(nGrade) { count++; }
    Grade(Grade &g) : name(g.name), grade(g.grade) { count++; }
    string getName() { return name; }
    void getInfo() const
    {
        cout << "姓名：" << name << " 成绩：" << grade << " 等级：" << getGrade() << endl;
    }
    //输出
    void showCount()
    {
        cout << "学生人数为：" << count << endl;
    }
    friend void compare(Grade &m, Grade &n);

private:
    string name;
    float grade;
    static int count;
    char getGrade() const
    {
        if (grade >= 90 && grade <= 100)
        {
            return 'A';
        }
        else if (grade >= 80 && grade < 90)
        {
            return 'B';
        }
        else if (grade >= 70 && grade < 80)
        {
            return 'C';
        }
        else if (grade >= 60 && grade < 70)
        {
            return 'D';
        }
        else if (grade < 60)
        {
            return 'E';
        }
    }
};
int Grade::count = 0;
void compare(Grade &m, Grade &n)
{
    if (m.grade > n.grade)
    {
        cout << "姓名：" << m.getName() << " 成绩：" << m.grade << " 等级：" << m.getGrade() << endl;
    }
    else
    {
        cout << "姓名：" << n.getName() << " 成绩：" << n.grade << " 等级：" << n.getGrade() << endl;
    }
}
int main()
{
    Grade g1("Sun", 100);
    Grade g2("Wu", 90);
    Grade g3("Jiang", 52);
    Grade g4("Zhou", 0);
    Grade g5("He ", 760);
    Grade g6("Liu", 88);
    g1.getInfo();
    g2.getInfo();
    g3.getInfo();
    g4.getInfo();
    g5.getInfo();
    g6.getInfo();
    cout << "g1和g2成绩比较高的是：";
    compare(g1, g2);
    return 0;
}