#include "BattManager.h"
#include<iostream>
using namespace std;

void BattleManager::StartBattle(Character* character)
{
	character->Attack();
}