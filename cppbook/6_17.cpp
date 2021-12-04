/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-02 12:29:42
 * @LastEditTime: 2021-11-06 15:24:53
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;

class Point
{
public:
    Point() : x(0), y(0)
    {
        cout << "Default Constructor called." << endl;
    }
    Point(int x, int y) : x(x), y(y)
    {
        cout << "Constructor called." << endl;
    }
    ~Point() { cout << "Destructor called." << endl; }
    int getX() const { return x; }
    int getY() const { return y; }
    void move(int newX, int newY)
    {
        x = newX;
        y = newY;
    }

private:
    int x, y;
};

int main()
{
    Point *ptr = new Point[2];
    ptr[0].move(5,10);
    ptr[1].move(15,20);
    cout<<"Deleteing..."<<endl;
    delete[] ptr;
    return 0;
}