#include <stdio.h>
#include <string.h>
struct book{
    char title[30];
    char author[30];
    int publicationYear;
    char ISBN[13];
    float price;
};
int main(){
    struct book book1;
    
    printf("Enter the title of the book:");
    scanf("%s",book1.title);
    printf("Enter the author of the book:");
    scanf("%s",book1.author);
    printf("Enter the publication year of the book:");
    scanf("%d",&book1.publicationYear);
    printf("Enter the ISBN of the book:");
    scanf("%s",book1.ISBN);
    printf("Enter the price of the book:");
    scanf("%f",&book1.price);

    printf("Title:%s\n",book1.title);
    printf("Author:%s\n",book1.author);
    printf("Publication Year:%d\n",book1.publicationYear);
    printf("ISBN:%s\n",book1.ISBN);
    printf("Price:%.2f\n",book1.price);

return 0;
}