#pragma once
#include "Currency.h"
class Dollar
	:public Currency
{
public:
	Dollar(double x);
	virtual double PerevodRubl() const override;
	virtual std::ostream &Print(std::ostream &out) const;
	virtual double perev() const override;
public:
	double r;
};
