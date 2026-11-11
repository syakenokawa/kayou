#include <iostream>
#include "Enemy2.h"

using namespace std;

void Enemy::Initialize()
{
    hp = 100;
}

void Enemy::TakeDamage(int damage)
{
    hp -= damage;

    if (hp < 0)
    {
        hp = 0;
    }
}

int main()
{
    Enemy enemy[3];

    // 敵を3体生成
    for (int i = 0; i < 3; i++)
    {
        enemy[i].Initialize();
    }

    int target;

    while (true)
    {
        cout << "攻撃する敵を選んでください（1～3）：";
        cin >> target;

        if (target < 1 || target > 3)
        {
            cout << "1～3を入力してください。\n";
            continue;
        }

        int index = target - 1;

        if (enemy[index].hp <= 0)
        {
            cout << "この敵は倒されています！\n";
            continue;
        }

        enemy[index].TakeDamage(30);

        // HP表示
        for (int i = 0; i < 3; i++)
        {
            cout << "敵" << i + 1
                << " HP：" << enemy[i].hp << "\n";
        }
    }

    return 0;
}