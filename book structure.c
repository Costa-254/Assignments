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
    
    strcpy(book1.title,"Introduction to C Programming");
    strcpy(book1.author,"John Smith");
    book1.publicationYear=2022;
    strcpy(book1.ISBN,"9780131103627");
    book1.price=49.99;

    printf("Title:%s\n",book1.title);
    printf("Author:%s\n",book1.author);
    printf("Publication Year:%d\n",book1.publicationYear);
    printf("ISBN:%s\n",book1.ISBN);
    printf("Price:%.2f\n",book1.price);

return 0;
}

   
    

