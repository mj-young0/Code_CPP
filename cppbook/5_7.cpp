/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-22 13:03:43
 * @LastEditTime: 2021-10-22 13:30:49
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
class R
{
public:
    R(int r1,int r2):r1(r1),r2(r2){}
    void print();
    void print() const;
private:
    int r1,r2;
};
void R::print(){
    cout<<r1<<":"<<r2<<endl;
}
void R::print() const{
    cout<<r1<<";"<<r2<<endl;
}

int main()
{
    R a(5,4);
    a.print();
    const R b(20,52);
    b.print();   
    return 0;
}