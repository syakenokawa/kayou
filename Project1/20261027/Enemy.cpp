#include "Enemy.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

// 定数
const int HP_MAX = 70;
const int HP_MIN = 30;
const int INDEX = 3;

int main(void)
{
    // 乱数の初期化
    srand((unsigned int)time(NULL));

    vector<Enemy> enemies;

    for (int i = 0; i < INDEX; i++)
    {
        int num = rand() % HP_MAX + HP_MIN;
        enemies.push_back(Enemy(num));
    }

    // 登録した敵のHPを表示
    for (const Enemy& enemy : enemies)
    {
        enemy.ShowStatus();
    }

    cout << "敵の数は" << enemies.size() << endl;

    // 指定した敵にランダムダメージを与える
    int damage = rand() % 71 + 20;

    cout << "ダメージは" << damage << endl;

    enemies[0].Damage(damage);

    // ダメージを受けた後、全員のHPを表示
    cout << "ダメージを受けた後" << endl;

    for (const Enemy& enemy : enemies)
    {
        enemy.ShowStatus();
    }

    // HPが0以下の敵を削除
    enemies.erase(
        remove_if(enemies.begin(), enemies.end(),
            [](const Enemy& enemy)
            {
                return enemy.GetHp() <= 0;
            }),
        enemies.end()
    );

    // 削除後のHPを表示
    cout << "削除後のHP" << endl;

    for (const Enemy& enemy : enemies)
    {
        enemy.ShowStatus();
    }

    // 削除後の敵の数を表示
    cout << "残った敵の数は" << enemies.size() << endl;

    return 0;
}