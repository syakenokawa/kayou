#include<iostream>
#include"Example.h"

using namespace std;
int main(void)
{
	Example example;

	example.hp = 100;
	example.attack = 200;
	example.playerX = 0;
	example.playerY = 0;
	example.ShowStatus();
		
	example.  Move();
	example.Attack();
	example.Damage(30);
	example.ShowStatus();
	return 0;
}

