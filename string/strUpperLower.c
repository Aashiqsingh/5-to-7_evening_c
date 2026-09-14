#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("Enter your str :");
    gets(str);


    // printf("%s",str);
    printf("%s",strupr(str));
    printf("%s",strlwr(str));
}