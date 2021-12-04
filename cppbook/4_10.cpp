/*
 * @程序名: 4_10.cpp
 * @功能: 个人银行账户管理程序
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-14 12:33:12
 * @LastEditTime: 2021-10-15 13:36:33
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include <cmath>
using namespace std;
class SavingsAccount
{
private:
    int id;
    double balance;
    double rate;
    int lastDate;
    double accumulation; //余额按按日累加之和

public:
    //记录一笔账，date为日期，amount为金额，desc为说明
    void record(int date, double amount);
    //获得到指定日期为止的存款金额按日累积值
    double accumulate(int date) const
    {
        return accumulation + balance * (date - lastDate);
    }
    SavingsAccount(int date, int id, double rate);
    int getId() { return id; }
    double getBalance() { return balance; }
    double getRate() { return rate; }
    void deposit(int date, double amount);
    void withdraw(int date, double amount);
    //结算利息，每年1月1日调用一次该函数
    void settle(int date);
    //显示账号信息
    void show();
};

//SavingAccount类相关成员函数的实现
SavingsAccount::SavingsAccount(int date, int id, double rate)
    : id(id), balance(0), rate(rate), lastDate(date), accumulation(0)
{
    cout << date << "\t#" << id << "is created" << endl;
}
void SavingsAccount::record(int date, double amount)
{
    accumulation = accumulate(date);
    lastDate = date;
    amount = floor(amount * 100 + 0.5) / 100;
    balance += amount;
    cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;
}
void SavingsAccount::deposit(int date, double amount)
{
    record(date, amount);
}
void SavingsAccount::withdraw(int date, double amount)
{
    if (amount > getBalance())
    {
        cout << "Error:not enough money" << endl;
    }
    else
    {
        record(date, -amount);
    }
}
void SavingsAccount::settle(int date)
{
    double interest = accumulate(date) * rate / 365; //计算年息
    if (interest == 0)
    {
        record(date, interest);
        accumulation = 0;
    }
}
void SavingsAccount::show()
{
    cout << "#" << id << "\tBalance:" << balance;
}

int main()
{
    SavingsAccount sa0(1, 21325302, 0.015);
    SavingsAccount sa1(1, 58320212, 0.015);
    sa0.deposit(5, 5000);
    sa1.deposit(25, 10000);
    sa0.deposit(45, 5500);
    sa1.withdraw(60, 4000);
    sa0.settle(90);
    sa1.settle(90);
    sa0.show();
    cout << endl;
    sa1.show();
    cout << endl;
    return 0;
}