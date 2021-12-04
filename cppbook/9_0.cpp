/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-26 12:01:50
 * @LastEditTime: 2021-11-26 12:06:02
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
template<typename T>
T abs(T x,T y){
    return x+y;
}
int main()
{
    int x = 5;
    int y = 6;
    float a = 1.1;
    float b = 2.2;
    cout<<abs(x,y)<<endl;
    cout<<abs(a,b)<<endl;
    return 0;
}