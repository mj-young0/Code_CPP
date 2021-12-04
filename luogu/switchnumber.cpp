#include<iostream>
using namespace std;
int main(){
    int a,b,t=0;
    cout<<"请输入两个数:";
    cin>>a>>b;
    t =a;
    a=b;
    b=t;
    cout<<a<<"  "<<b;
}