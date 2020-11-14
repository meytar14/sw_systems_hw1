#include "myMath.h"
double Exponent(int x) 
{
    return power(E,x);
    /*
 double exp=1;
 if(x>0)
 {
  for(int i=0;i<x;i++)
  {
    exp=exp*E;
  }
 } 
 else
 {
    int t=-x;
    for(int i=0;i<x;i++)
  {
    exp=exp*E;
  }
     exp=1/exp;
 }
  return exp;*/
}

double Power(double x , int y)
{
    double pow=1;
    if(y>0)
    {
      for(int i=0;i<y;i++)
      {
          pow=pow*x;
      }
    }
    else
    {
      int t=-y;
      for(int i=0;i<t;i++)
      {
          pow=pow*x;
      }
    }
    return pow;
}