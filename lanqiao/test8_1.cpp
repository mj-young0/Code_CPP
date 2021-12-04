/*
 * @程序名:test8_1.cpp
 * @功能:实现求取1-100之间的质数，通过文件输出流对象将结果保存在文件data1.txt中。 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-27 13:05:16
 * @LastEditTime: 2021-11-27 13:45:22
 * @版本: 1.0
 * @实验思路: 先实现求取1-100之间的质数，然后通过文件输出流对象将结果保存在文件data1.txt中。 
 */
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    int i, k, j;
    //构造输出流对象
    ofstream os("data1.txt", ios_base::app);
    //求取1-100之间的质数，通过文件输出流对象将结果保存在文件data1.txt中
    for (i = 2; i <= 100; i++)
    {
        int ret = 1;
        k = sqrt(i);
        for (j = 2; j <= k; j++)
        {
            //判断能否被整除
            if (i % j == 0)
            {
                ret = 0;
                break;
            }
        }
        //如果不能被整除，输出i
        if (ret == 1)
            // 朝TXT文档中写入数据
            os << i << " ";
    }
    os.close();
    return 0;
}