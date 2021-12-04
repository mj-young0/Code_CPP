#include <iostream>
using namespace std;

double power(double x,int n){
    double val = 1.0;
    while(n--){
        val *= x;
    }
    return val;
}

int main(){
    cout<<"请输入一个8位二进制数；"<<endl;
    char ch;
    cin>>ch;
    int num = 0;
    for(int i=7;i>=0;i--){
        if(ch=='1')
        num += static_cast<int> (power(2,i));
    } 
    cout<<"该数的十进制数为；"<<num<<endl;
    return 0;
}