#include<stdio.h>


void main()
{
    // int a[3] = elements
    // int a[3][3] = row and column
    // int a[3][3][3] = block row and column

    // we have 3 class , each class has 3 students and each students has 3 subject

    int a[2][2][2];

    // a[0][0][0] = 1
    // a[0][0][1] = 2
    // a[0][1][0] = 3
    // a[0][1][1] = 4
    // a[1][0][0] = 5
    // a[1][0][1] = 6
    // a[1][1][0] = 7
    // a[1][1][1] = 8


    for(int i=0;i<2;i++) // block
    {
        for(int j=0;j<2;j++) // row
        {
            for(int k=0;k<2;k++) // column
            {
                printf("Enter a[%d][%d][%d] element",i+1,j+1,k+1);
                scanf("%d",&a[i][j][k]);
            }
        }
    }

    // a[0][0][0] = 1
    // a[0][0][1] = 2
    // a[0][1][0] = 3
    // a[0][1][1] = 4
    // a[1][0][0] = 5
    // a[1][0][1] = 6
    // a[1][1][0] = 7
    // a[1][1][1] = 8


    printf("\nHorizontally elements\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                printf("%d ",a[j][i][k]);
            }
            printf("\t");
        }
        printf("\n");
    }



    // printf("\nVertically elements\n");
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<2;j++)
    //     {
    //         for(int k=0;k<2;k++)
    //         {
    //             printf("%d ",a[i][j][k]);
    //         }
    //         printf("\n");
    //     }
    //     printf("\n");
    // }



}