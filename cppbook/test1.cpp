/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-25 23:55:11
 * @LastEditTime: 2021-11-25 23:55:11
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
#include <cmath>
using namespace std;
void f(int x)
{
	if(x==0)
	{
		cout<<0;
		return ;
	}
	int n = log(x)/log(2);   //判断一个数在二进制下的位数（log2(x) = log10(x) / log10(2)
	bool first = 1;  //判断一个数是否是第一次
	for(int i=n;i>=0;i--)   //因为输出要从大到小输出，所以for得反着来（否者的话位运算的下表是从右到左，会先输出 2(0) + ...
	{
		if(x&(1<<i))
		{
			if(i==1)      //如果是2^1次方的话，不用输出2(1)直接输出2，所以要特判
			{
				if(first)
				{
					first = 0;
					cout<<"2";
				}
				else

				continue;
			}
			if(first)
			{
				first = 0;
				cout<<"2"<<"(";
				f(i);
				cout<<")";
			}
			else 
			{
				cout<<"+"<<"2"<<"(";    //如果不是第一次的话就要前面加一个+号
				f(i);
				cout<<")";
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	f(n);
	return 0;
}