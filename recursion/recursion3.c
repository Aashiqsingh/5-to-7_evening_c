#include<stdio.h>

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }

    return n*fact(n-1);
}


void main()
{
    int ans = fact(5);
    printf("Factorial = %d",ans);
}