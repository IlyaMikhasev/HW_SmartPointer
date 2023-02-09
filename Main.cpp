#include <iostream>
#include "Hero.h"
#include <memory>
#include "Warrior.h"
int main() {
	setlocale(LC_ALL, "Russian");
	std::shared_ptr<Hero> h = std::make_shared<Warrior>(15);
	h->Damage();
	h->AmountOfLife();
	std::shared_ptr<Hero> pHero = std::dynamic_pointer_cast<Hero>(h);
	if (pHero == nullptr) {
		std::cout << "douncast indefided\n";
	}
	else {
		pHero->Damage();
		pHero->AmountOfLife();
	}
	return 0;
}