#pragma once
#include "Hero.h"
class Warrior : public Hero
{
public:
	Warrior(int dmg);
	void Damage()const override;
	void AmountOfLife()const override;
private:
	int _addDamage;
};

