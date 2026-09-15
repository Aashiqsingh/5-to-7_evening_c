#include<stdio.h>
#include<string.h>
void main()
{
    char str[] = "fullstack abcdefghijk develop.";
    char word[50],longest[50];
    int i=0,j=0,len,max=0;


    while(1)
    {
        if(str[i]!=' ' && str[i]!='\0')
        {
            word[j] = str[i];
            j++;
        }
        else{
            word[j] = '\0';
            len = strlen(word);

            if(len>max)
            {
                max = len;
                strcpy(longest,word);
            }
            j=0;
        }

        if(str[i]=='\0')
        {
            break;
        }

        i++;
    }

    printf("The longest word is %s",longest);
    printf("\n length of longest word : %d",max);



}