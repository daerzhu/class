#include"shu1.h"
using namespace std;
int main()
{
RealNumber a(7.9), b(6.6);
RealNumber c = a+b;
RealNumber d = a*b;
c.print();
d.print();
IntegerNumber a1(7), b1(6);
IntegerNumber c1= a1+b1;
IntegerNumber d1 = a1*b1;
c1.print();
d1.print();
ComplexNumber a2(3,7), b2(6,4);
ComplexNumber c2= a2+b2;
ComplexNumber d2 = a2*b2;
c2.print();
d2.print();
}
