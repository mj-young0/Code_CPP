#include <iostream>
using namespace std;
class Clock
{
public:
    Clock(int hour1,int minute1,int second1);
    void showTime();
    void setTime(int hour1 , int minute1 , int second1);

private:
    int hour, minute, second;
};
Clock::Clock(int hour1 , int minute1 , int second1):hour(hour1),minute(minute1),second(second1){}
void Clock::setTime(int hour1, int minute1, int second1)
{
    hour = hour1;
    minute = minute1;
    second = second1;
}
void Clock::showTime()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

int main()
{
    Clock clock(0,0,0);
    clock.showTime();
    cout << "请再次输入初始时间";
    clock.setTime(12, 30, 59);
    clock.showTime();
    return 0;
}
