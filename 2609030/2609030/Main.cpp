#include "DxLib.h"
#include "Main.h"

int Judge::Judgement(Player* player, CPU* cpu)
{
    if (player->hand == cpu->hand)
    {
        return 0;
    }

    if ((player->hand == 0 && cpu->hand == 1) ||
        (player->hand == 1 && cpu->hand == 2) ||
        (player->hand == 2 && cpu->hand == 0))
    {
        return 1;
    }

    return 2;
}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Player player;
    CPU cpu;
    Judge judge;

    player.Input();
    cpu.Select();

    int result = judge.Judgement(&player, &cpu);

    return 0;
}