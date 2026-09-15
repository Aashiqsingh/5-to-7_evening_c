#include<stdio.h>
#include<string.h>

void strRev(char name[]) // shreya
{
    int i=0,temp,len;
    len = strlen(name);
    char copy[20];
    strcpy(copy,name);
    while(i<len/2)
    {
        temp = name[i];
        name[i] = name[len-i-1];
        name[len-i-1] = temp;
        i++;
    }

    // printf("Reversed string is %s",name);
    if(strcmp(copy,name)==0)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }
}

int main()
{
    char str[20] = "naman";


    strRev(str);
}