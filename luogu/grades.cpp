#include<iostream>
using namespace std;
int main(){
    int grade;
    cout<<"请输入成绩";
    cin>>grade;
    if(grade>=90&&grade<=100){
        cout<<'A';
    }else if(grade>=80&&grade<=89){
        cout<<'B';
    }else if(grade>=70&&grade<=79){
        cout<<'C';
    }else if(grade>=60&&grade<=69){
        cout<<'D';
    }else if(grade>=0&&grade<=59){
        cout<<'E';
    }else {
        cout<<"成绩输入有误，请重新输入。";
    }    
}