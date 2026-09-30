#include<stdio.h>
void main()
{
    int a[2][2][3];

    printf("Enter elements\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<3;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    int sum=0;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<3;k++)
            {
                sum += a[i][j][k];
                printf("%d ",a[j][i][k]);
            }
            printf("\t");
        }

        printf("----%d",sum);
        sum=0;
        printf("\n");
    }

    
}