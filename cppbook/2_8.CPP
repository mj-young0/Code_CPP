#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"请输入一个因数：";
    cin>>n;
    cout<<"该因数的因子有：";
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            cout<<i<<' ';
        }  
    }
    return 0;
}