#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{

    int n;
    char ch[10];


    // srand(time(0));
    // int x = rand()%10;
    // printf("%d",x);

    printf("Enter number to genrate OTP.");
    scanf("%d",&n);


    srand(time(0));
    for(int i=1;i<=n;i++)
    {
        ch[i] = rand()%26+97;
    }

    for(int i=1;i<=n;i++)
    {
        printf("%c",ch[i]);
    }


}