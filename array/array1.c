#include<stdio.h>
// #define 


void main()
{
    int n,b[10];

    printf("Enter the size of array: ");
    scanf("%d",&n);


    int a[n];

    printf("Enter Elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    // 34 78 54 34 78
    // remove
    for(int i=0;i<n;i++)
    {
        int duplicate = 0;
        for(int j=0;j<i;j++)
        {
            if(a[i] == a[j])
            {
                duplicate = 1;
            }
        }


        if(duplicate == 0)
        {
            printf("%d ",a[i]);
        }
    }

  
}