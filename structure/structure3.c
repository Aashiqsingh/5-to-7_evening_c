#include<stdio.h>
#define SIZE 3

struct Book{

    int id;
    char name[20];
    char title[20];

};

void main()
{
    
    struct Book b[SIZE];
    // struct Book b[3];


    for(int i=0;i<SIZE;i++)
    {
        printf("Enter id : ");
        scanf("%d",&b[i].id);
        fflush(stdin);
        printf("Enter name : ");
        gets(b[i].name);
        printf("Enter title : ");
        gets(b[i].title);
    }

    printf("Id\tName\tTitle\n");
    for(int i=0;i<SIZE;i++)
    {
        printf("%d\t%s\t%s\n",b[i].id,b[i].name,b[i].title);
    }
}