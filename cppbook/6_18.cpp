/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-02 12:49:55
 * @LastEditTime: 2021-11-06 15:36:52
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include<cassert>
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
        cout << "Default Constructor called." << endl;
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
class ArrayOfPoints
{
public:
    ArrayOfPoints(int size):size(size){
        points = new Point[size];
    }
    ~ArrayOfPoints(){
        cout<<"Deleteing..."<<endl;
        delete[]points;
    }
    //获得下表为index的数组元素
    Point &element(int index){
        assert(index>=0&&index<size);//如果数组下标越界，程序终止
        return points[index];
    }
private:
    Point *points;//指向动态数组首地址
    int size;//数组大小
};

int main()
{
    int count;
    cout<<"Please enter the count of points:";
    cin>>count;
    ArrayOfPoints points(count);
    points.element(0).move(5,0);
    points.element(1).move(15,20);
    return 0;
}