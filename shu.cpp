#include"shu.h"
using namespace std;
RealNumber::RealNumber( double val = 0)
{
rn = val;
}

void RealNumber::print()
{
cout << rn << endl;
}

RealNumber RealNumber::add(const RealNumber& m)
{
return RealNumber(rn + m.rn);
}

RealNumber RealNumber::mul(const RealNumber& m)
{
return RealNumber(rn * m.rn);
}

IntegerNumber::IntegerNumber(int val = 0)
{
rn = val;
}

IntegerNumber::IntegerNumber(const RealNumber& m)
{
rn =int(m.rn);
}

ComplexNumber::ComplexNumber(double i = 0, double j = 0)
{
a = i;
b = j;
}

ComplexNumber ComplexNumber::add(const ComplexNumber&m)
{
return ComplexNumber(a+m.a,b+m.b);
}

ComplexNumber ComplexNumber::mul(const ComplexNumber&m)
{
return ComplexNumber(a*m.a-b*m.b,a*m.b+b*m.a);
}

void ComplexNumber::print()
{
cout << a<<"+" << b <<"i"<< endl;
}
