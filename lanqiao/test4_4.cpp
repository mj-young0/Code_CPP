/*
 * @程序名: test4_4.cpp
 * @功能:定义Boat和Car两个类，二者都有weight属性，定义二者的一个友元函数getTotalWeight()计算二者重量之和。 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-14 13:35:31
 * @LastEditTime: 2021-11-14 13:50:56
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
//声明Car类
class Car;
class Boat
{
public:
    Boat(string name, float weight) : name(name), weight(weight) {}
    Boat(Boat &b) : name(b.name), weight(b.weight) {}
    //友元函数申明
    friend void getTotalWeight(Boat &b, Car &c);

private:
    string name;
    float weight;
};
class Car
{
public:
    Car(string name, float weight) : name(name), weight(weight) {}
    Car(Car &c) : name(c.name), weight(c.weight) {}
    //友元函数申明
    friend void getTotalWeight(Boat &b, Car &c);

private:
    string name;
    float weight;
};
//友元函数实现
void getTotalWeight(Boat &b, Car &c)
{
    cout << b.weight + c.weight << endl;
}
int main()
{
    Boat b("boat", 500);
    Car c("car", 400);
    getTotalWeight(b, c);
    return 0;
}