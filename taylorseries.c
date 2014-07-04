#include<stdio.h>
#include <float.h>
#include <math.h>
void main()
{
    int i;
    float x,sum,fact,term;
    printf("\nYou have this series : 1+x/1!+x^2/2!+ x^3/3! + x^4/4!+……………….x^n/n!");
    printf("\n\nEnter the value for X : ");
    scanf("%f",&x);
    sum = 0;
    term = 1;
    fact = 1;
    printf("The value of FLT_EPSILON is %20.20f\n", FLT_EPSILON);
    for(i=1; term >= FLT_EPSILON; i++)
    {
        fact =fact * i;
        sum = sum + term;
        term = pow(x,i)/fact;
    }
    printf("\n\nThe Calculated value of e^% .3f = %f",x, sum);
           printf("\n\nThe Library Function Value of e^%.3f = %f",x, exp(x));


}

