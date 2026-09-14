#include<stdio.h>
#include<string.h>
void main()
{
    char str1[6] = "india";
    char str2[6] = "india";


    int flag=1;
    if(strlen(str1) == strlen(str2))
    {
        for(int i=0;i<strlen(str1);i++)
        {
            if(str1[i]!=str2[i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }






    // printf("%d",strcmp(str1,str2));
    
    
    // if(strcmp(str1,str2)==0)
    // {
    //     printf("Strings are equal");
    // }
    // else{
    //     printf("Strings are not equal");
    // }
}