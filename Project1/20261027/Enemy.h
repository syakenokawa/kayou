#pragma once
class Enemy
{
private:
	int hp;
	int damage;
public:
	
	Enemy(int hp);
	~Enemy();

	
	void damage(int damage) const;
	void ShowStatus() const;
};

