#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=1;i<=100;i++){
        for(j=1;j<=100;j++){
            for(k=1;k<=100;k++){
                if(i*3+k*2+k*0.5==100&&i+j+k==100){
                    cout<<"母鸡:"<<i<<"只 "<<"公鸡:"<<j<<"只 "<<"小鸡:"<<k<<"只 "<<endl;
                }
    }
    }
    }
}