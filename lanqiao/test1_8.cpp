//8. 找出0-200之间的所有质数（除1和它本身之外不能再被其它数整除，这样的数据被称为质数，0不作参与分类）。
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, j, k;

    for (i = 2; i <= 200; i++)
    {
        int ret = 1;
        k = sqrt(i);
        for (j = 2; j <= k; j++)
        {
            if (i % j == 0)
            {
                ret = 0;
                break;
            }
        }
        if (ret == 1)
            cout << i << " ";
    }
    return 0;
}