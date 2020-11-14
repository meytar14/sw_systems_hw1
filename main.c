#include <stdio.h>
#include "myMath.h"
int main()
{
    double x; 
    printf("Please enter a real number ");
    scanf("%lf", &x);
    int exp =(int) x;
    double result1=sub(add(Exponent(exp),Power(x,3)),2);
    double result2=add(mul(x,3),mul(Power(x,2),2));
    double result3=div(mul(Power(x,3),4),sub(5,mul(x,2)));
    printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point:%lf  is: %lf\n",x,result1);
    printf("The value of f(𝑥) = 3x + 2X^2 at the point:%lf  is: %lf\n",x,result2);
    printf("The value of f(𝑥) = (4x^3)/5 -2x  at the point:%lf  is: %lf\n",x,result3);

}