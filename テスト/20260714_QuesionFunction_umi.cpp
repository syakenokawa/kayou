#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_QuesionHeader_umi.h"
using namespace std;
//ゲーム
void PitchingType(int pitching)
{
    //ボールの等級の仕方
    switch (pitching)
    {
    case Straight:
        cout << "ストレート" << endl;
        break;

    case Curve:
        cout << "カーブ" << endl;
        break;

    case Slider:
        cout << "スライダー" << endl;
        break;

    case Sinker:
        cout << "シンカー" << endl;
        break;
    }
}
//playerかcpuの勝敗
void Result(int out)
{
    if (out >= OUT_COUNT)
    {
        cout << "PLAYER WINNER!!" << endl;
    }
    else
    {
        cout << "CPU WINNER!!" << endl;
    }
}
//関数
int InputCheck(int min, int max)
{
    int player;

    while (true)
    {
        cin >> player;

        if (player < PITCHING_MIN || player > PITCHING_MAX)
        {
            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        else
        {
            break;
        }
    }

    return player;
}