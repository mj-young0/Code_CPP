/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-19 12:32:11
 * @LastEditTime: 2021-11-19 12:37:26
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
    cout<<setiosflags(ios_base::fixed);
    for(int i=0;i<4;i++){
        cout<<setiosflags(ios_base::left)<<setw(6)<<names[i]<<setiosflags(ios_base::left)<<setw(10)<<setprecision(1)<<values[i]<<endl;
    }
    return 0;
}