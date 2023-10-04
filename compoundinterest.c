#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r,a,ci;
    printf("Enter the principal amount : ");
    scanf("%lf",&p);
    printf("Enter the time : ");
    scanf("%lf",&t);
    printf("Enter the rate of interest : ");
    scanf("%lf",&r);
    a=p*(pow((1+r/100),t));
    ci=a-p;
    printf("The Compound interest is : %lf",ci);
    return 0;
}