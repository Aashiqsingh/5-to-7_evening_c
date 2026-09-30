// pointer : pointer is a variable which stores the address of another variable
// int a = 10;
#include<stdio.h>
void main()
{
    int a = 10;
    int *p = &a;
    printf("value of a = %d",a);
    printf("\naddress of a = %u",&a);
    printf("\naddress of p = %u",p);
    printf("\nvalue of p = %d",*p);

}