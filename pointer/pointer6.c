#include<stdio.h>

void main()
{
    int a[5] = {65,66,78,89,90};

    int *ptr = a;
    // int a = 10;
    // int *p = &a;
    int evenSum=0,oddSum=0;

    for(int i=0;i<5;i++)
    {
        // printf("%d\n",*(ptr+i));
        // printf("%u\n",*(ptr+i));
        if(*(ptr+i)%2==0)
        {
            evenSum++;
        }
        else{
            oddSum++;
        }
    }

    printf("Even sum is %d\n",evenSum);
    printf("Odd sum is %d\n",oddSum);

    
}