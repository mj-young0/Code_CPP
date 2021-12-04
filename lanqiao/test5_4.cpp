/*
 * @程序名:test5_4.cpp 
 * @功能:用vector创建字符串数组对象，长度为5（30分）。

（1）手动输入以下5个英文句子,存入数组对象：
 Do one thing at a time, and do well.
 Action speak louder than words.
 Never put off what you can do today until tomorrow.
 Like author, like book.
 Knowledge makes humble, ignorance makes proud.

（2）编写函数，使得数组中的字符串按大小排序（按字符串比较的规则）。

（3）输出排序后的句子，并显示其长度。 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-23 20:43:58
 * @LastEditTime: 2021-11-23 20:43:58
 * @版本: 1.0
 * @实验思路: 用vector创建字符串数组对象,调用getline()函数手动输入以下5个英文句子,存入数组对象，
 * 编写void bubbleSort(vector<string> &arr, int x)函数，使得数组中的字符串按大小排序（按字符串比较的规则），
 * 使用size()函数返回字符串长度
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//使数组中的字符串按大小排序（按字符串比较的规则）
void bubbleSort(vector<string> &arr, int x)
{
    for (int j = 0; j < x; j++)
    {
        for (int i = 0; i < x - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                string t;
                t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }
        }
    }
    cout << "将字符串数组中字符串按字符串大小升序排序：" << endl;
    //输出排序后的句子，并显示其长度。
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " 长度为：" << arr[i].size() << endl;
    }
}
int main()
{
    //用vector创建字符串数组对象str
    vector<string> str(5);
    //给字符串数组对象str赋值
    cout << "请输入5句话：" << endl;
    for (int i = 0; i < 5; i++)
    {
        getline(cin, str[i]);
    }
    bubbleSort(str, 5);
    return 0;
}