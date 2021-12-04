/*
 * @程序名:test6_5.cpp 
 * @功能:定义一个Document类，有数据成员name,从Document派生出Book类，增加数据成员pageCount。
 * 观察基类与派生类的构造函数和析构函数的调用顺序。（20分） 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-25 21:10:23
 * @LastEditTime: 2021-11-25 21:24:46
 * @版本: 1.0
 * @实验思路:分别创建Document类和从Document派生出的Book类，构造函数中cout它们被调用了，
 * 并在主函数中创建这两个类的对象，输出结果为：
 * Document类的构造函数已被调用。
 * Document类的构造函数已被调用。
 * Book类的构造函数已被调用。    
 * Book类的析构函数已被调用。
 * Document类的析构函数已被调用。
 * Document类的析构函数已被调用。
 */
#include <iostream>
using namespace std;

class Document
{
public:
    Document(string newName) : name(newName)
    {
        cout << "Document类的构造函数已被调用。" << endl;
    }
    ~Document()
    {
        cout << "Document类的析构函数已被调用。" << endl;
    }

private:
    string name;
};

class Book : public Document
{
public:
    Book(string newName, int pc) : Document(newName), pageCount(pc)
    {
        cout << "Book类的构造函数已被调用。" << endl;
    }
    ~Book()
    {
        cout << "Book类的析构函数已被调用。" << endl;
    }

private:
    int pageCount;
};
int main()
{
    Document dm("文件");
    Book book("c++语言程序设计", 524);
    return 0;
}