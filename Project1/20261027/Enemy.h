
#pragma once

class Enemy
{
private:
    int hp;

public:
    Enemy(int hp);
    ~Enemy();

    void ShowStatus() const;

    // ダメージを与える
    void Damage(int damage);

    // HPを取得する
    int GetHp() const;
};
