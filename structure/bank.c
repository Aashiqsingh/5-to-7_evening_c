#include<stdio.h>
#define SIZE 2

struct ATM{
    int id;
    char name[20];
    int bal;
    int flag;
}b[SIZE];


void create()
{
    for(int i=0;i<SIZE;i++)
    {
        printf("Enter the ID: ");
        scanf("%d",&b[i].id);
        fflush(stdin);
        printf("Enter the name: ");
        gets(b[i].name);
        b[i].bal = 2000;
        b[i].flag=1;
    }
}

void deposit()
{
    int id,bal,found=0;
    printf("Enter Id :");
    scanf("%d",&id);

    for(int i=0;i<SIZE;i++)
    {
        if(b[i].id == id)
        {
            printf("Enter the amount to deposit: ");
            scanf("%d",&bal);
            b[i].bal += bal;
            printf("Deposited amount: %d",bal);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Account not found");
    }
}

void withdraw()
{
    int id,bal,found=0;
    printf("Enter Id :");
    scanf("%d",&id);
    for(int i=0;i<SIZE;i++)
    {
        if(b[i].id == id)
        {
            printf("Enter the amount to withdraw: ");
            scanf("%d",&bal);
            if(bal <= b[i].bal)
            {
                b[i].bal -= bal;
                printf("Withdrawn amount: %d",bal);
            }
            else{
                printf("Insufficient balance");
            }

            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Account not found");
    }
}


void display()
{
    printf("Id\tName\tBalance\n");
    for(int i=0;i<SIZE;i++)
    {
        if(b[i].flag == 1)
        {
            printf("%d\t%s\t%d\n",b[i].id,b[i].name,b[i].bal);
        }
    }

}

void delete(int id)
{
    // b[id].flag = 0;

    for(int i=0;i<SIZE;i++)
    {
        if(b[i].id == id)
        {
            b[i].flag = 0;
            printf("Account deleted successfully...");
        }
    }
}


void main()
{
    int x = 0,choice,id;
    while(x == 0)
    {
        printf("\n1 - CREATE");
        printf("\n2 - DEPOSIT");
        printf("\n3 - WITHDRAW");
        printf("\n4 - DISPLAY");
        printf("\n5 - DELETE");
        printf("\n6 - EXIT");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: create();
                    break;
            case 2: deposit();
                    break;
            case 3: withdraw();
                    break;
            case 4: display();
                    break;
            case 5: 
                    printf("Enter your Id for Delete :");
                    scanf("%d",&id);
                    delete(id);
                    break;
            case 6: x = 1;
                    break;
        }

    }
}