#include<iostream>
#include"EnemySample4.h"
using namespace std;
int main(void)
{
	EnemySample4 enemy1;
	EnemySample4 enemy2;
	EnemySample4 enemy3;


	EnemySample4* target = &enemy1;

	target->TakeDamage(30);
	target = &enemy2;
	target->TakeDamage(50);

	enemy1.ShowSatus();
	enemy2.ShowSatus();
	enemy3.ShowSatus();

	return 0;
}


