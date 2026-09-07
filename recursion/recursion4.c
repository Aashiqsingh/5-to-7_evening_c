#include<stdio.h>

int sumOfDigit(int n)
{
    if(n==0)
    {
        return 0;
    }

    int lastDigit = n %10;
    return lastDigit + sumOfDigit(n/10);
}

void main()
{
    int ans = sumOfDigit(863);
    printf("Sum of digits = %d",ans);
}