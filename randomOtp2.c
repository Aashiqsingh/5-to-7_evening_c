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
    // for(int i=1;i<=n;i++)
    // {
    //     if(i%2==0)
    //     {
    //         ch[i] = rand()%10+48;
    //     }
    //     else{
    //         ch[i] = rand()%26+97;
    //     }
    // }

     for(int i=1;i<=n;i++)
    {
        if(i<=3)
        {
            ch[i] = rand()%10+48;
        }
        else{
            ch[i] = rand()%26+97;
        }
    }





    for(int i=1;i<=n;i++)
    {
        printf("%c",ch[i]);
    }


}