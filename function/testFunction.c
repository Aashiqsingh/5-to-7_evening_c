#include<stdio.h>
void print()
{
    printf("Hello World");
}


void sum(int a,int b)
{
    printf("%d + %d = %d",a,b,a+b);
}

float demo()
{
    float pi = 3.14;

    return pi;
}

int mul(int x,int y)
{
    return x*y;
}

void main()
{
    // float ans;
    // ans = demo();
    // printf("%f",ans);

    // printf("%f",demo());


    // int ans = mul(2,3);
    // printf("%d",ans);

    printf("%d",mul(3,4));
}