#include <stdio.h>
#include "myMath.h"
int main()
{
    double x;//storage the input 
    printf("Please enter a real number ");
    scanf("%lf", &x);//put the input of the user to "x"
    int exp =(int) x;//because the Exponent function can only get input of int we storage double"x" also in the variable int "exp"
    double result1=sub(add(Exponent(exp),Power(x,3)),2);
    double result2=add(mul(x,3),mul(Power(x,2),2));
    double result3=sub(div(mul(Power(x,3),4),5),mul(x,2));
    printf("The value of f(x) = e^x + x^3 − 2 at the point:%lf  is: %lf\n",x,result1);
    printf("The value of f(x) = 3x + 2X^2 at the point:%lf  is: %lf\n",x,result2);
    printf("The value of f(x) = (4x^3)/5 -2x  at the point:%lf  is: %lf\n",x,result3);

}