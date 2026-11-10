#include<iostream>
#include"EnemySample4.h"

EnemySample4::EnemySample4() : hp(100) {}
void EnemySample4::TakeDamage(int damage)
{
	if (hp < 0) hp = 0;

}

void EnemySample4::ShowSatus() const
{
	std::cout << "Enemy HP" << hp << std::endl;

}




