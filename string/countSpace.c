#include<stdio.h>
#include<string.h>
void main()
{

    char str[50];
    printf("Enter your str :");
    gets(str);

    int len=0;

    while(str[len]!='\0')
    {
        len++;
    }
    int count=0;

    for(int i=0;i<len;i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }

    printf("Number of spaces = %d",count);
}