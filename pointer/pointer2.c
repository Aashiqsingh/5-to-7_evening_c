#include<stdio.h>
void main()
{
    int a = 10;

    int *ptr = &a;

    printf("\n address = %u",&a);
    printf("\naddress = %u",ptr);
    printf("\nvalue = %d",*ptr);

    *ptr = 20;
    printf("\nvalue = %d",*ptr);
    printf("\n a = %d",a);

    




    // int b;

    // b=a;

    // b++;
    // printf("b = %d",b);
    // printf("\n a = %d",a);

    

    


}