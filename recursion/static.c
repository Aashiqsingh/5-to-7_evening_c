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

123 

// 1 + 8 + 27

// 153  
// 1 + 125 + 27