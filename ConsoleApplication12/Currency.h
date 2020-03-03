#pragma once
#include <iostream>

class Currency
{
public:
	virtual ~Currency() = default;
	virtual double PerevodRubl() const = 0; //для рублей
	virtual std::ostream& Print(std::ostream& out) const = 0; //вывод на экран
	virtual double perev() const = 0; //для рублей
	
};