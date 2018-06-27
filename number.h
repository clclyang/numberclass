#ifndef NUMBER_H
#define NUMBER_H

class Number
{
  public:
  virtual void print()=0;
  virtual void add(const Number& other)=0;
  virtual void mul(const Number& other)=0;
};

class RealNumber:public Number
{
  public:
  RealNumber(double c)
:rn(c)
{

}
  void add(const Number &other,const RealNumber &s);
  void mul(const Number &other,const RealNumber &s);
  void print();
  ~RealNumber();
  private:
  double rn;
  double a;
  double b;
};

#endif
