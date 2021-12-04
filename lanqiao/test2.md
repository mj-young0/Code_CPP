<!--
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-23 23:30:52
 * @LastEditTime: 2021-12-04 11:18:42
 * @版本: 1.0
 * @实验思路: 
-->

#一、 实验目的
1.了解C++开发工具并学习使用

2.理解函数的形参、函数原型、内联函数；学会编制重载函数和递归函数。

#二、实验内容
1. 编写函数实现递归方式求取整数n的阶乘，要求在主函数中输入非负整数n,（其中n<=10）。通过调用输出结果，例如输入5,得到5！=120。
2. 编写函数求两个整数的最大公约数和最小公倍数。
3. 编写函数输出指定行数的星星等腰三角形。例如输入：5，得到以下图形。
图片描述

4. 编写函数实现从键盘输入一个1000以内正整数，将其按照二进制进行输出。例如，将135打印成10000111.

5. 编写函数实现输出从1 开始的整数矩阵。例如输入4，5,则能够输出4x5的矩阵：

1    2   3   4   5

6    7   8   9  10

11  12  13  14  15

16  17  18  19  20

6. 编写函数输出某整数的所有因子（能够整除该数），实现从键盘输入一个整数，输出其全部因子。例如，输入6，则输出1，2，3，6。

7. 编写函数输出指定范围内的质数。例如输入100,200，则能够实现求出100-200之间的质数。

8. 编写函数求平面中两个点坐标(x1,y1)与(x2,y2)的距离。例如输入:0 0 3 4则得到坐标（0，0）与（3，4）两个点之间的距离为5。
9. 编写三个同名的函数:getArea(…),它们之间形成重载，分别用于求圆的面积，矩形的面积，三角形面积。
10. 理解下面的程序，并在IDE中运行，查看结果，回答程序后面的问题。
    ```
    
    #include <iostream>
    using namespace std;
    void swap(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    int main()
    {
        int i = 5;
        int j = 10;
        cout << "Before swap: i=" << i << ",j=" << j << endl;
        swap(i, j);
        -------------------------------------------------------①
                                                                cout
            << "After the first swap: i=" << i << ",j=" << j << endl;
        swap(&i, &j);
        -----------------------------------------------------②
                                                                cout
            << "After the second swap: i=" << i << ",j=" << j << endl;

        return 0;
    }
    ```
1. 问题一：上述程序3的输出结果是什么？
    答：
2. 问题二：程序3在①处函数调用后并不能实现两个数的交换，而②处却可以，为什么？
    答：
3. 问题三：程序3在②处调用的是哪个重载函数？
    答：
    
#三、实验步骤及结果
（在此部分列出解题思路、程序代码和运行结果截图。请注意保持格式规范统一，截图清晰，大小合适）
1. 编写函数实现递归方式求取整数n的阶乘，要求在主函数中输入非负整数n,（其中n<=10）。通过调用输出结果，例如输入5,得到5！=120。
   
   ```
    
   ```
"fileheader.customMade": {


        // 头部注释默认字段
        "程序名": "",
        "功能": "",
        "作者": "软件21-16 杨旭祥 20212501236",
        "Date": "Do not edit", // 设置后默认设置文件生成时间
        "LastEditTime": "Do not edit", // 设置后，保存文件更改默认更新最后编辑时间
        "版本": "1.0",
        "实验思路": "",
    },
    // 函数注释
    "fileheader.cursorMode": {
        // 默认字段
        "description":"",
        "param":"",
        "return":""
    },
    //自动添加头部注释
    "fileheader.configObj": {
        "createHeader": true // 默认打开
    },
    "explorer.confirmDragAndDrop": false