#pragma once
#include <iostream>

class Currency
{
public:
	virtual ~Currency() = default;
	virtual double PerevodRubl() const = 0; //��� ������
	virtual std::ostream& Print(std::ostream& out) const = 0; //����� �� �����
	virtual double perev() const = 0; //��� ������
	
};