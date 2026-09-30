#pragma once

class Player
{
public:
    int hand;

    void Input();
};

class CPU
{
public:
    int hand;

    void Select();
};

class Judge
{
public:
    int Judgement(Player* player, CPU* cpu);
};

