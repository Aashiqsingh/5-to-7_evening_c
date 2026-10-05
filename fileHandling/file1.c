#include<stdio.h>

// mode : r for read, w for write, a for append

int main()
{
    FILE *fp;
    fp = fopen("demo2.txt","a");
    char ch;

    if(fp == NULL)
    {
        printf("File not found");
    }
    else{
        printf("File opened successfully");
        printf("Enter a character :");
        scanf("%c",&ch);

        fputc(ch,fp);

        
        fclose(fp);
    }

}