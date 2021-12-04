/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-16 10:02:46
 * @LastEditTime: 2021-11-27 14:04:49
 * @版本: 1.0
 * @实验思路: 
 */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int arr[100][100];
    int n;
    cin >> n;
    arr[0][0] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;
    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                arr[i][j] = 1;
            }
            if (j == i)
            {
                arr[i][j] = 1;
            }
            if(j!=0 and j!=i)
            {
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == i)
            {
                cout << arr[i][j];
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}