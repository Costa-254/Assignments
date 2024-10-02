//a simple interest to calculate simple interest
#include <stdio.h>
#include <math.h>

int main()
{
    double principal, rate, time, simple_interest;
    printf("Enter principal: ");
    scanf("%lf", &principal);
    printf("Enter rate: ");
    scanf("%lf", &rate);
    printf("Enter time: ");
    scanf("%lf", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("Simple interest: %lf", simple_interest);
    return 0;
}