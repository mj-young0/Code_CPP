/*
 * @程序名: test4_5.cpp
 * @功能: 定义一个日期类(Date)和一个时间类(Time)。Time类是Date类的友元。
 * Time类中的有打印时间的成员函数void display()可以实现打印出当前的时间，例如格式为：2021年10
月30日;请编写程序设计这两个类，要求创建时间对象Today，并一次输出其中的日期和时间。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-14 14:18:35
 * @LastEditTime: 2021-11-14 15:01:30
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
class Date
{
public:
    friend class Time;
    Date(int year, int month, int day);
    int getYear() const { return year; }
    int getMonth() const { return month; }
    int getDay() const { return day; }

private:
    int year;
    int month;
    int day;
};

Date::Date(int year, int month, int day) : year(year), month(month), day(day) {}

class Time
{
public:
    Time(int hour, int mimute, int second);
    int getHour() const { return hour; }
    int getMimute() const { return mimute; }
    int getSecond() const { return second; }
    void display(Date &d, Time &t);

private:
    int hour;
    int mimute;
    int second;
};

Time::Time(int hour, int mimute, int second) : hour(hour), mimute(mimute), second(second) {}
void Time::display(Date &d, Time &t)
{
    cout << d.getYear() << "年" << d.getMonth() << "月" << d.getDay() << "日" << t.getHour() << "时" << t.getMimute() << "分" << t.getSecond() << "秒" << endl;
}

int main()
{
    Date date(2021, 11, 14);
    Time time(14, 58, 11);
    time.display(date, time);
}