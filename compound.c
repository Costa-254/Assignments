//compute compund interest
#include <stdio.h>
#include <math.h>

int main()
{
    double principal, rate, time, compound;
    printf("Enter principal: ");
    scanf("%lf", &principal);
    printf("Enter rate: ");
    scanf("%lf", &rate);
    printf("Enter time: ");
    scanf("%lf", &time);
    compound = principal * pow((1 + rate/100), time);
    printf("Compound interest: %.2f\n", compound);
    return 0;
}