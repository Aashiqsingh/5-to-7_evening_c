#include<stdio.h>
#include<string.h>

void main()
{
    // char str1[] = "Hello";
    // char str2[] = "World";


    char str[10];
    char anchor[20] = "@";

    printf("Enter userName :");
    gets(str);

    strcat(anchor,str);
    printf("%s",strcat(anchor,strlen(str)));

    // strcat(anchor,strlen(str));

    // strcat("@",str);
    // scanf("%s",str);
    // printf("%s",str);


    // strcat(str1,str2);
    // printf("%s",str2);

    

}



// shreyapatel
// @shreyapatel11