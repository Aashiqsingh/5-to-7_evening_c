#include<stdio.h>
#include<string.h>

void main()
{
    int count = 0;
    char str[100];
    printf("Enter a string: ");
    gets(str);
    // ((())
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            count++;
        }
        else if(str[i] == ')' || str[i] == ']' || str[i] == '}')
        {
            count--;
        }

        // if(count<0)
        // {
        //     break;
        // }
    }

    if(count ==0)
    {
        printf("Balanced");
    }
    else{
        printf("Not Balanced");
    }
}


// ({[(}]})