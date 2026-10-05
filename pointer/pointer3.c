#include<stdio.h>

void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    printf("Before swapping a = %d and b = %d",a,b);

    swap(&a,&b);


    printf("\nAfter swapping a = %d and b = %d",a,b);
}


// int *p = &a;


// int *p;


// *p = &a;
