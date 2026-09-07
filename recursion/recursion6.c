#include<stdio.h>

int reverse(int n)
{
    static int rev = 0;
    if(n==0)
    {
        return rev;
    }

    int lastDigit = n % 10;
    rev = rev * 10 + lastDigit;

    return reverse(n/10);
}

void main()
{
    int n = 123;
    int ans = reverse(n);
    printf("Reverse of = %d",ans);
}