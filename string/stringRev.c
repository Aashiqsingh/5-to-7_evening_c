#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("Enter your str :");
    gets(str);


    // printf("Paragraph = %s",str);
    // printf("\nReversed paragraph = %s",strrev(str));
    int length=0;
    while(str[length]!='\0')
    {
        length++;
    }

    for(int i=length-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }

//   shreya
}