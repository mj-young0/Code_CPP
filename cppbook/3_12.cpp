/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-12 12:30:49
 * @LastEditTime: 2021-10-12 12:34:33
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
int main()
{
    int x=5,y=10;
    cout<<"x="<<x<<"  y="<<y<<endl;
    swap(x,y);
    cout<<"x="<<x<<"  y="<<y<<endl;
    
    return 0;
}