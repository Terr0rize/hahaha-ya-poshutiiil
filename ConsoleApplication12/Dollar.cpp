#include "pch.h"
#include "Currency.h"
#include <iostream>
#include "Dollar.h"
using namespace std;
Dollar::Dollar(double x)
	: r(x)

{
}


double Dollar::PerevodRubl() const
{
	return 60*r;
}

double Dollar::perev() const
{
	return r * 100;
}
std::ostream& Dollar::Print(std::ostream& out) const
{
	return out << "Perevod is dollara v rubli: Dollar=" << r;
}
