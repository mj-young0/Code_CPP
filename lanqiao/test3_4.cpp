/*
 * @程序名:4_4.cpp 
 * @功能:定义一个DataType(数据类型)类，能处理包含字符型、整型、浮点型三种类型的数据，给出其构造函数。 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-07 03:10:45
 * @LastEditTime: 2021-11-14 19:02:28
 * @版本: 1.0
 * @实验思路:该类能够处理不同数据类型，即任何两种类型不会同时有效，因此考虑用联合体。 
 */
#include <iostream>
using namespace std;

class DataType
{
public:
    DataType(int i)
    {
        data.i = i;
        type = INT;
    }
    DataType(char c)
    {
        data.c = c;
        type = CHAR;
    }
    DataType(float f)
    {
        data.f = f;
        type = FLOAT;
    }

    void show()
    {
        switch (type)
        {
        case INT:
            cout << data.i << endl;
            break;
        case CHAR:
            cout << data.c << endl;
            break;
        case FLOAT:
            cout << data.f << endl;
            break;

        default:
            break;
        }
    }

private:
    enum TYPE
    {
        INT,
        CHAR,
        FLOAT
    }; //使用枚举类型列出三种处理可能
    union DATA
    {
        int i;
        char c;
        float f;
    };
    TYPE type;
    DATA data;
};

int main()
{
    DataType a(1);
    a.show();
    DataType b('b');
    b.show();
    DataType c(3.1415f);
    c.show();
    return 0;
}