#ifndef SHU1_H
#define SHU1_H

#include<stdio.h>
#include<iostream>

using namespace std;

class Number
{public:
virtual void print()=0;
};

class RealNumber:public Number
{public:
RealNumber(double val=0)
{
rn = val;
}

virtual void print()
{
cout << rn << endl;
}

RealNumber operator+(const RealNumber&m)
{
return RealNumber(rn +m.rn);
}

RealNumber operator*(const RealNumber&m)
{
return RealNumber(rn *m.rn); 
}
double rn;
};
class IntegerNumber:public RealNumber
{public:
IntegerNumber(int val )   
{
rn = val;
}
IntegerNumber(const RealNumber&m )
{
rn = m.rn;
}
};

class ComplexNumber:public Number
{
public:
ComplexNumber(double i, double j)
{
a = i;
b = j;
}
virtual void print()
{cout << a<<"+" << b <<"i"<< endl;
}
ComplexNumber operator+ (const ComplexNumber&m)
{
return ComplexNumber(a+m.a,b+m.b);
}
ComplexNumber operator*(const ComplexNumber&m)
{
return ComplexNumber(a*m.a-b*m.b,a*m.b+b*m.a);
}

private:
double a;
double b;
};
#endif
