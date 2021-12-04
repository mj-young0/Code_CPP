/*
 * @程序名: test3_5.cpp
 * @功能: 编写函数实现输出从1 开始的整数矩阵。例如输入4，5,则能够输出4x5的矩阵：
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-24 17:08:18
 * @LastEditTime: 2021-10-24 17:39:44
 * @版本: 1.0
 * @实验思路: 通过for循环将递增数据存入arr数组，然后遍历出来，通过if判断换行
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m,n,i=1;
    cout<<"请输入两个正整数：";
    cin>>m>>n;
    int arr[m*n];
    for(int j=0;j<m*n;j++){
        arr[j]=i;
        i++;
    }
    for(int j=0;j<m*n;j++){
        if(j%n==0){
            cout<<endl;
        }
        cout<<"\t"<<setw(2)<<arr[j];
    }
    
    return 0;
}