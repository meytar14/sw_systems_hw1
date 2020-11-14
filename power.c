#include "myMath.h"
double Exponent(int x) 
{
 double exp=1;
 if(x>0)
 {
  for(int i=0;i<x;i++)//multiply e by himself x times
  {
    exp=exp*E;
  }
 } 
 else //if x is negative than we divide 1 by (e multiply by himself (-x) times)
 {
    int t=-x;
    for(int i=0;i<x;i++)
  {
    exp=exp*E;
  }
     exp=1/exp;
 }
  return exp;
}

double Power(double x , int y)
{
    double pow=1;
    if(y>0)
    {
      for(int i=0;i<y;i++)//multiply x by himself y times
      {
          pow=pow*x;
      }
    }
    else//if y is negative than we divide 1 by (e multiply by himself (-y) times)
    {
      int t=-y;
      for(int i=0;i<t;i++)
      {
          pow=pow*x;
      }
    }
    return pow;
}