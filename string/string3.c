#include<stdio.h>
#include<string.h>
void main()
{
    char name[15] = "shreya patel";
    int length=0;

    while(name[length]!='\0')
    {
        length++;
    }

    // length = strlen(name);
    printf("Length of name = %d",length);
}