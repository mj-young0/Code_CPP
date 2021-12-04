/*
 * @程序名: 
 * @功能: 设某次比赛体育的结果有四种可能：胜（WIN)、负（LOSE）、平局（TIE）、比赛取消
 * (CANCEL),编写程序顺序输出这四种情况。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-15 12:54:18
 * @LastEditTime: 2021-10-15 13:15:03
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
enum GameResult
{
    WIN,
    LOSE,
    TIE,
    CANCEL
};
int main()
{
    GameResult result;
    enum GameResult omit = CANCEL;
    for (int count = WIN; count <= CANCEL; count++)
    {
        result = GameResult(count);
        if (result == omit)
        {
            cout << "The game was canceled" << endl;
        }
        else
        {
            cout << "The game was played";
            if (result == WIN)
                cout << "and we won!";
            if (result == LOSE)
                cout << "and we lost.";
            cout << endl;
        }
    }
    return 0;
}