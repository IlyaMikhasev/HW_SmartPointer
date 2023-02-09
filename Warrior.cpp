#include "Warrior.h"

Warrior::Warrior(int dmg):_addDamage(dmg){}

void Warrior::Damage() const{
	std::cout << "Damage = 20+"<<_addDamage<<'\n';
}

void Warrior::AmountOfLife() const{
	std::cout << "Warrior of life = 177\n";
}
