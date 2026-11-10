#include<iostream>
#include"Enemy2.h"
int main(void)
{
	Enemy2 enemy1;
	Enemy2 enemy2;
	Enemy2 enemy3;

	Enemy2 player;

	Enemy2* target = &enemy1;

	target->TakeDamage(30);

	target = &enemy2;
	target->TakeDamage(50);

	enemy1.ShowStatus();
	enemy2.ShowStatus();
	enemy3.ShowStatus();







}






















