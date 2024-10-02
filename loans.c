#include<stdio.h>
int main(){
    int age;
    float AnnualIncome;
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter AnnualIncome: ");
    scanf("%f",&AnnualIncome);
    if(age>=21 && AnnualIncome>=21000){
        printf("Congratulations you qualify for the loan");
    }
    else{
        printf("Unfortunately we are unable to offer you a loan at the moment");
    }
    return 0;
}
