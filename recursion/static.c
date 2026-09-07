#include<stdio.h>
void print()
{   
    static int a = 10;
    a++;
    printf("%d",a);
}

void main()
{
    print();
    print();
    print();
}