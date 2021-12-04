/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-19 13:46:25
 * @LastEditTime: 2021-11-19 13:50:31
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;

int divide(int x,int y){
    if(y==0){
        throw x;
    }
    return x/y;
}
int main()
{
    try{
        cout<<"5/2="<<divide(5,2)<<endl;
        cout<<"8/0="<<divide(8,0)<<endl;
        cout<<"7/1="<<divide(7,1)<<endl;
    }catch(int e){
        cout<<e<<" is divided by zero!"<<endl;
    }
    cout<<"That is ok."<<endl;
    return 0;
}