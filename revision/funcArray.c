#include<stdio.h>

void scanData(int a[],int n)
{

    printf("Enter array elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
} 

void display(int a[],int n)
{
    printf("Array elements :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}

int main()
{
    int n;

    printf("Enter size of array :");
    scanf("%d",&n);

    int a[n];
    scanData(a,n);
    display(a,n);
}