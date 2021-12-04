/*
 * @程序名:test7_1 
 * @功能: 设计复数类Complex（请参照教材例题8-1的设计），实现运算符重载。 要求：

（1）重载运算符“+”和“*”，使之分别能用于复数相加和相乘。（30分）

（2）重载运算符“<<”，使得复数对象能够使用“<<”运算符输出。（15分）
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-27 11:48:18
 * @LastEditTime: 2021-11-27 12:16:21
 * @版本: 1.0
 * @实验思路:先创建Complex类，分别按课本例题重载+ 、*、<<运算符 
 */
#include <iostream>
using namespace std;
//复数类定义
class Complex
{
public:
    //构造函数
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    ~Complex() {}
    //运算符+重载成员函数
    Complex operator+(const Complex &c2) const;
    //运算符*重载成员函数
    Complex operator*(const Complex &c2) const;
    friend ostream &operator<<(ostream &out, const Complex &m); //重载"<<"运算符
    int getReal() const { return real; }                        //得到复数实部
    int getImag() const { return imag; }                        //得到复数虚部

private:
    double real; //复数实部
    double imag; //复数虚部
};
//函数实现
Complex Complex::operator+(const Complex &c2) const
{
    return Complex(real + c2.real, imag + c2.imag);
}
Complex Complex::operator*(const Complex &c2) const
{
    //创建一个临时无名对象作为返回值
    return Complex(real * c2.real - imag * c2.imag, imag * c2.real + real * c2.imag);
}

//重载运算符<<
ostream &operator<<(ostream &out, const Complex &c)
{
    out << "(" << c.real << "," << c.imag << ")";
    return out;
}

int main(void)
{
    Complex c1(5, 4), c2(3, 10), c3; //定义复数类的对象
    c3 = c1 + c2;
    cout << "c3 = " << c3 << endl;
    Complex c4 = c1 * c2;
    cout << "c4 = " << c4;

    return 0;
}