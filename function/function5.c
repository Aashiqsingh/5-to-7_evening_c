#include<stdio.h>
int isPallindrome(int n)
{
    int rev=0,rem;
    // while(n!=0)
    // {
    //     rem = n%10;
    //     rev = rev * 10 + rem;
    //     n = n/10;
    // }

    for(;n!=0;n/=10)
    {
        rem = n%10;
        rev = rev*10 + rem;
        // n = n/10;
    }

    return rev;
}

void main()
{
    int n = 121;
    // isPallindrome(n) == n ? printf("Pallindrome") : printf("Not Pallindrome");

    int x = isPalindrome(n);
    if(x == n)
    {
        printf("Pallindrome");
    }
    else{
        printf("Not Pallindrome");
    }
}