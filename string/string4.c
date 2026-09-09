#include<stdio.h>
#include<string.h>
void main()
{
    // char ch = 'A';
    // char str;

    // printf("ch = %c\n",ch);
    // str = ch;
    // printf("str = %c\n",str);

    char name[5] = "palak";

    // printf("name = %s",name);

    char copy[6];
    // // copy = name; // error
    // strcpy(copy,name);


    int len = strlen(name);
    // printf("len = %d",len);

    for(int i=0;i<len;i++)
    {
        copy[i] = name[i];
        // printf("copy[%d] = %c",i,copy[i]);
    }



    printf("\ncopy = %s",copy);
    // printf("\nname = %s",name);
}