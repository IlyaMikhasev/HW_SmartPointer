#pragma once
#include <iostream>
class Hero
{
public:
	virtual void Damage()const;
	virtual void AmountOfLife()const;
	virtual ~Hero() {}
};

