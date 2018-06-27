#include<iostream>
#include "number.h"
using namespace std;

int main()
{
  RealNumber na(4),mb(2);
  na.add(mb);
  na.mul(mb);
  na.print();
  return 0;
}
