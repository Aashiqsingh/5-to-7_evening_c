#include<stdio.h>

void main()
{
    int a = 55;
    
    
    // printf("value of a = %d",a);
    // printf("\nAddress of a = %u",&a);

    int *p;
    p = &a;

    // printf("\nAddress of p = %u",p); // adddresss of a
    // printf("\nValue of p = %d",*p); // value of a


    // printf("\nAddress of pointer variable = %u",&p);


    int **pp;
    pp = &p;

    // printf("\nAddrees of pp = %u",*pp); // value of p which is address of a
    // printf("\Address  of p = %d",pp); // aadrees of p

    // printf("\n value of a = %d",**pp);

    **pp = **pp + 4;
    *p = *p + 21;
    a += *p;


    printf("\nvalue of a = %d",a);
}