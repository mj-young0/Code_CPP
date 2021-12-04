/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-19 12:12:30
 * @LastEditTime: 2021-11-19 12:13:32
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;

int main()
{
    double values[]={1.23,35.36,653.7,4358.24};
    for(int i=0;i<4;i++){
        cout.width(10);
        cout<<values[i]<<endl;
    }
    return 0;
}