#include "number.h"
#include<iostream>
using namespace std;


void RealNumber::add(const Number &other,const RealNumber &s)
{
  a=rn+s.rn;
}
void RealNumber::mul(const Number &other,const RealNumber &s)
{
  b=rn*s.rn;
}
void RealNumber::print()
{
  if(a)cout<<"add result: "<<a<<endl;
  if(b)cout<<"mul result: "<<b<<endl;
}
RealNumber::~RealNumber()
{
}


