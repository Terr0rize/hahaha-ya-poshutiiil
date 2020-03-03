#pragma once
#include "Currency.h"
class Pound
	:public Currency
{
public:
	Pound(double y);
	virtual double PerevodRubl() const override;
	virtual std::ostream &Print(std::ostream &out) const;
	virtual double perev() const override;
public:
	double h;
};
