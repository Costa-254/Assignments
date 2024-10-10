#include <stdio.h>
int main(){
    int customerid;
    char customerName[30];
    float unitconsumed,charges,totalAmount,totalBill;
    printf("Enter the customer id: ");
    scanf("%d",&customerid);
    printf("Enter the customer name: ");
    scanf("%s",&customerName);
    printf("Enter the unit consumed: ");
    scanf("%f",&unitconsumed);
    do
    {
        if(unitconsumed<=199){
            totalBill=unitconsumed*1.20;
         
        }
        else if(unitconsumed>=200 && unitconsumed<400){
            totalBill=unitconsumed*1.50;
        }
        else if(unitconsumed >=400 && unitconsumed<600){
            totalBill=unitconsumed*1.80;
        }
        else{
            totalBill=unitconsumed*2.00;
        }
        if(totalBill>=400){
            charges=totalBill*15/100;
            totalAmount=totalBill+charges;
        }
          if(totalBill<100){
                printf("Total bill is less than 100 \n");
                break;
            }
        printf("Customer id: %d\n",customerid);
        printf("Customer name: %s\n",customerName);
        printf("Unit consumed: %f\n",unitconsumed);
        printf("Total bill: %f\n",totalBill);
        printf("Total amount: %f\n",totalAmount);
        
    }while(unitconsumed=0);
    return 0;
}

    

        
            
    


    



