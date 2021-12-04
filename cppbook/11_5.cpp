/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-19 12:44:55
 * @LastEditTime: 2021-11-19 12:48:10
 * @版本: 1.0
 * @实验思路: 
 */
#include<fstream>
#include <iostream>
using namespace std;

struct Date
{
    int monday, day, year;
};

int main()
{
    Date dt = {6,10,92};
    ofstream file("date.dat",ios_base::binary);
    file.write(reinterpret_cast<char *>(&dt),sizeof(dt));
    file.close();
    return 0;
}