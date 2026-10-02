#include<stdio.h>
void main()
{
    float pi = 3.14;
    float *p = &pi;
    float **ptr;

    // printf("\n addres = %u",&pi);
    // printf("\n address = %u",p);


    // printf("\npointer address = %u",&p);

    ptr = &p;
    // printf("\n pointer address = %u",ptr);


    printf("\n %u",ptr);  /// address of *p variable
    printf("\n value of pi = %u",*ptr); // value of *p variable which is address of pi variable
    printf("\n value of pi = %f",**ptr); // value of pi variable

    **ptr = 10.54;

    printf("\n value of pi = %f",**ptr);
    printf("\n value of p = %f",pi);
}