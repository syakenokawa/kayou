#include"Enemy.h"
#include <iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
const int HP_MAX = 70;
const int HP_MIN = 30;
const int INDEX = 3;
const int DAMAGE_MIN = 20;
const int DAMAGE_MAX = 70;
int main(void)
{
	srand((unsigned int)time(NULL));

	vector<Enemy>enemies;
	for (int i = 0; i < INDEX; i++)
	{
		int value = rand() % HP_MAX + HP_MIN;
		enemies.push_back(Enemy(value));
	}
	for (const Enemy& ebemies)
	{
		enemy.ShowHp();
	}
	cout << "攻撃する敵を選択してください" << endl;

	int choise;
	cin >> choise;
	int damage = rand() % HP_MAX + HP_MIN;
	cout << "与えたダメージ:" << damage << endl;
	enemies[chooise - 1].Damage(damage);
	cout<<"ダメージ後のHP"<<endl:
	   for (Enemy& enemy : enemies)
	   {



	   }


	return 0;
}





