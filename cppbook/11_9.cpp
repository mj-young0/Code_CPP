/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-19 13:24:44
 * @LastEditTime: 2021-11-27 13:27:44
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include<fstream>
using namespace std;

struct SalaryInfo{
    unsigned id;
    double salary;
};
int main()
{
    SalaryInfo employee1 = {60001,8000};
    ofstream os("payroll",ios_base::out|ios_base::binary);
    os.write(reinterpret_cast<char*>(&employee1),sizeof(employee1));
    os.close();

    ifstream is("payroll",ios_base::in|ios_base::binary);
    if(is){
        SalaryInfo employee2;
        is.read(reinterpret_cast<char*>(&employee2),sizeof(employee2));
        cout<<employee2.id<<" "<<employee2.salary<<endl;
    }else{
        cout<<"ERROR:Cannot open file 'payroll'."<<endl;
    }
    is.close();
    return 0;
}