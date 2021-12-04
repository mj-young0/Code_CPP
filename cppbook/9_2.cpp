/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-26 12:18:21
 * @LastEditTime: 2021-11-26 12:34:29
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
struct Student
{
    int id;
    float gpa;
};
template <class T>
class Store
{
public:
    Store();
    T &getElem();
    void putElem(const T &x);

private:
    T item;
    bool haveValue;
};
template <class T>
Store<T>::Store() : haveValue(false) {}
template <class T>
T &Store<T>::getElem()
{
    if (!haveValue)
    {
        cout << "No item present!" << endl;
        exit(1);
    }
    return item;
}
template <class T>
void Store<T>::putElem(const T &x)
{
    haveValue = true;
    item = x;
}
int main()
{
    Store<int> s1, s2;
    s1.putElem(3);
    s2.putElem(-7);
    cout << s1.getElem() << " " << s2.getElem() << endl;
    Student g = {1000, 23};
    Store<Student> s3;
    s3.putElem(g);
    cout << "The student id is " << s3.getElem().id << endl;

    Store<double> d;
    cout << "Retrieving object d...";
    cout << d.getElem() << endl;
    
    return 0;
}