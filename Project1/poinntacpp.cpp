#include<iostream>

using namespace std;
void Heal(int* Hp)
{
	*Hp += 30;
}
void Damage(int* Hp)
{
	*Hp -= 20;
}
int main()
{
	int Hp = 100;
	int* php = &Hp;

	cout << "Hp;" << *php << endl;
	Heal(&Hp);
	cout << "HP;" << php << endl;
	Damage(&Hp);
	cout << "HP;" << php << endl;



	return 0;
}