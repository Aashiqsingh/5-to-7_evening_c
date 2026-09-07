#include<stdio.h>

int print(int n)
{
    if(n == 0)
    {
        return 0;
    }

    printf("%d ",n);
    return print(n-1);
} 



void main()
{
    print(5);
}