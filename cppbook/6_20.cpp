/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-02 13:44:46
 * @LastEditTime: 2021-11-05 12:15:31
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include <vector>
using namespace std;

double average(const vector<double> &arr)
{
    double sum = 0;
    for (unsigned i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        return sum / arr.size();
    }
}

int main()
{
    unsigned n;
    cout << "n=";
    cin >> n;

    vector<double> arr(n);
    cout << "Please input" << n << "real numbers:" << endl;
    for (unsigned i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Average=" << average(arr) << endl;
    return 0;
}