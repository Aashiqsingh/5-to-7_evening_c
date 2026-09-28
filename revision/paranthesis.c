#include<stdio.h>
#include<string.h>

int main()
{
    int roundcount = 0,squareCount=0,curlyCount=0;
    char str[20];

    printf("Enter string : ");
    gets(str);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i] == '(')
        {
            roundcount++;
        }
        else if(str[i] == '{')
        {
            curlyCount++;
        }
        else if(str[i] == '[')
        {
            squareCount++;
        }
        else if(str[i] == '}')
        {
            curlyCount--;
        }
        else if(str[i] == ']')
        {
            squareCount--;
        }
        else if(str[i] == ')')
        {
            roundcount--;
        }
    }

    if(roundcount == 0 && squareCount == 0 && curlyCount == 0)
    {
        printf("Balanced parenthesis");
    }
    else{
        printf("Unbalanced parenthesis");
    }
}