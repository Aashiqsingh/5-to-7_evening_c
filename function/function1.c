#include<stdio.h>

int isPrime(int);

void main()
{
    int ans;
    ans = isPrime(19);
    // if(ans == 1){
    //     printf("Not Prime");
    // }
    // else{
    //     printf("Prime");
    // }
    // ans == 1 ? printf("Not Prime") : printf("Prime");
    isPrime(20) ? printf("Not Prime") : printf("Prime");

}

int isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}