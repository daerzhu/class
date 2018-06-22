#ifndef SHU_H
#define SHU_H

#include<stdio.h>
#include<iostream>

using namespace std;

class Number
{public:
virtual void print()=0;
};

class RealNumber:public Number
{public:
RealNumber(double);
virtual void print();
RealNumber add(const RealNumber&);
RealNumber mul(const RealNumber&); 
double rn;
};
class IntegerNumber:public RealNumber
{public:
IntegerNumber(int);
IntegerNumber(const RealNumber&);
};

class ComplexNumber:public Number
{
public:
ComplexNumber(double, double);
virtual void print();
ComplexNumber add(const ComplexNumber&);
ComplexNumber mul(const ComplexNumber&);
private:
double a;
double b;
};
#endif
