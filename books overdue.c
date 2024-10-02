#include <stdio.h>
int main(){
    int BookId,dueDate,daysOverdue,returnDate,fineAmount,fineRate;
    printf("Enter BookId: ");
    scanf("%d",&BookId);
    printf("dueDate: ");
    scanf("%d",&dueDate);
    printf("returnDate: ");
    scanf("%d",&returnDate);
    daysOverdue=returnDate-dueDate;
    if(daysOverdue<=7)
    {
        fineAmount=20;
    }
    else if(daysOverdue<=14){
        fineAmount=50;
    }else{
        fineAmount=100;
    }
    fineRate=daysOverdue*fineAmount;
    printf("BookId:%d\n",BookId);
    printf("dueDate:%d\n",dueDate);
    printf("returnDate:%d\n",returnDate);
    printf("daysOverdue: %d\n",daysOverdue);
    printf("fineAmount: %d\n",fineAmount);
    printf("fineRate: %d\n",fineRate);
    return 0;
}