#include<stdio.h>
#include<string.h>
// remove duplicate characters from a string
void main()
{
    char str[] = "india";
    for(int i=0;i<strlen(str);i++)
    {
        int flag=0;

        for(int j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                flag=1;
                break;
            }
        }


        if(flag==0)
        {
            printf("%c\n",str[i]);
        }
    }
}