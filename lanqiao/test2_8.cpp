/*
 * @程序名: test3_8
 * @功能:编写函数求平面中两个点坐标(x1,y1)与(x2,y2)的距离。
 *       例如输入:0 0 3 4则得到坐标（0，0）与（3，4）两个点之间的距离为5。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-24 18:31:49
 * @LastEditTime: 2021-10-24 22:04:05
 * @版本: 1.0
 * @实验思路: 使用两点之间距离公式进行计算
 */
#include <iostream>
#include <cmath>
using namespace std;
int distance(int x1, int x2, int y1, int y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main()
{
    int x1, x2, y1, y2, dist;
    cout << "请输入四个整数：" << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    dist = distance(x1, x2, y1, y2);
    cout << "计算出(" << x1 << "," << y1 << ")与(" << x2 << "," << y2 << ")的距离为" << dist << endl;
    return 0;
}