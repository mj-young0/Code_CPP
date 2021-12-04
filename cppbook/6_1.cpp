/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-29 12:49:52
 * @LastEditTime: 2021-10-29 12:54:11
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;

int main()
{
    int a[10],b[10];
    for(int i=0;i<10;i++){
        a[i]= i*2-1;
        b[10-i-1] = a[i];
    }
    for(const auto &e:a){
        cout<<e<<" ";
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}