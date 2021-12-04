/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-19 13:15:20
 * @LastEditTime: 2021-11-19 13:16:24
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include<string>
using namespace std;

int main()
{
    string line;
    cout<<"Type a line terminated by't'"<<endl;
    getline(cin,line,'t');
    cout<<line<<endl;    
    return 0;
}