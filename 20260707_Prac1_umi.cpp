#include<iostream>
#include"Header1_umi.h"
using namespace std;
void even(int ary[], int index);
void odd(int ary[], int index);
int maid(void)

{
	//配列
	int arry[INDEX] = {};
	//配列に追加する
	cout << "10 個の数値を入力する。\n";
	//配列へ入力する関数を呼び出します
	AddArray(arry, INDEX);
	//偶数と奇数で振り分ける
	cout << "偶数：" << endl;

	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2 == 0)
		{
			cout << arry[i] << "\n";
		}
	}
	cout << "奇数：" << endl;
	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2 != 0)
		{
			cout << arry[i] << "\n";
		}
	}

	return 0;
}






