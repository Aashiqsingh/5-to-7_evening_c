#include<stdio.h>

void findLargest(int n,int a[])
{
    // printf("%u",&a[0]);
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    printf("Largest element is %d",max);

}


void main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);

    }
    findLargest(n,a);

}