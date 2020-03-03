#include "pch.h"
#include "Pound.h"
using namespace std;
Pound::Pound(double z)
	: h(z)

{
}


double Pound::PerevodRubl() const
{
	return 86 * h;
}

double Pound::perev() const
{
	return h * 240;
}
std::ostream& Pound::Print(std::ostream& out) const
{
	return out << "Perevod is Pound v rubli: Poundov=" << h;
}