/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-02 13:58:13
 * @LastEditTime: 2021-11-08 21:25:38
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include <cassert>
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
    ArrayOfPoints(int size) : size(size)
    {
        points = new Point[size];
    }
    ~ArrayOfPoints()
    {
        cout << "Deleteing..." << endl;
        delete[] points;
    }

    Point &element(int index)
    {
        assert(index >= 0 && index < size);
        return points[index];
    }

private:
    Point *points;
    int size;
};

int main()
{
    int count;
    cout << "Please enter tne count of points:";
    cin >> count;
    ArrayOfPoints pointsArray1(count); //创建对象数组
    pointsArray1.element(0).move(5, 10);
    pointsArray1.element(1).move(15, 20);

    ArrayOfPoints pointsArray2 = pointsArray1; //创建对象数组副本
    cout << "Copy of pointsArray1:" << endl;
    cout << "Point_0 of array2:" << pointsArray2.element(0).getX() << "," << pointsArray2.element(0).getY() << endl;
    cout << "Point_1 of array2:" << pointsArray2.element(1).getX() << "," << pointsArray2.element(1).getY() << endl;

    pointsArray1.element(0).move(25, 30);
    pointsArray1.element(1).move(35, 40);
    cout << "After the moving of pointsArray1:" << endl;
    cout << "Point_0 of array2:" << pointsArray2.element(0).getX() << "," << pointsArray2.element(0).getY() << endl;
    cout << "Point_1 of array2:" << pointsArray2.element(1).getX() << "," << pointsArray2.element(1).getY() << endl;
    return 0;
}