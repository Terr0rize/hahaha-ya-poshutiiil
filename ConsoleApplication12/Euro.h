#pragma once
#include "Currency.h"
class Euro
	:public Currency
{
public:
	Euro(double y);
	virtual double PerevodRubl() const override;
	virtual std::ostream &Print(std::ostream &out) const;
	virtual double perev() const override;
public:
	double e;
};
