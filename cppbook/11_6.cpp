/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-19 12:56:57
 * @LastEditTime: 2021-11-19 13:02:21
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

template <class T>
inline string toString(const T &v)
{
    ostringstream os;
    os << v;
    return os.str();
}

int main()
{
    string str1 = toString(5);
    cout << str1 << endl;
    string str2 = toString(1.2);
    cout << str2 << endl;
    string str3 = toString('a');
    cout << str3 << endl;

    return 0;
}