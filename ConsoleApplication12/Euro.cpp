#include "pch.h"
#include "Euro.h"
using namespace std;
Euro::Euro(double y)
	: e(y)

{
}


double Euro::PerevodRubl() const
{
	return 84 * e;
}

double Euro::perev() const
{
	return 0;
}

std::ostream& Euro::Print(std::ostream& out) const
{
	return out << "Perevod is Euro v rubli: Dollar=" << e;
}