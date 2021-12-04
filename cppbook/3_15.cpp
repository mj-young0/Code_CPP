/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-12 13:04:23
 * @LastEditTime: 2021-10-12 13:40:20
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include <iomanip>
using namespace std;
int getVolume(int length, int width = 2, int height = 3);
int main()
{
    const int x = 10, y = 12, z = 15;
    cout << "Some box data is";
    cout << getVolume(x, y, z) << endl;
    cout << "Some box data is";
    cout << getVolume(x, y) << endl;
    cout << "Some box data is";
    cout << getVolume(x) << endl;
    return 0;
}
int getVolume(int length, int width /*=2*/, int height /*=3*/)
{
    cout << setw(5) << length << setw(5) << width << setw(5) << height << '\t';
    return length * width * height;
}