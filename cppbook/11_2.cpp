/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-19 12:19:03
 * @LastEditTime: 2021-11-19 12:23:37
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    double values[]={1.23,35.36,653.7,4358.24};
    string names[]={"Zoon","Jimmy","AI","Stan"};
    for(int i=0;i<4;i++){
        cout<<setw(6)<<names[i]<<setw(10)<<values[i]<<endl;
    }
    return 0;
}