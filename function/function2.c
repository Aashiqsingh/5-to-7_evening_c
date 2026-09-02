#include<stdio.h>

void singapore(int budget,char name[])
{
    printf("%s your singapore trip is confirmed with package %d",name,budget);
}

void dubai(int budget,char name[])
{
    printf("%s your dubai trip is confirmed with package %d",name,budget);
}

void paris(int budget,char name[])
{
    printf("%s your paris trip is confirmed with package %d",name,budget);
}

void goa(int budget,char name[])
{
    printf("%s your goa trip is confirmed with package %d",name,budget);
}


void main()
{
    int amount;
    char name[20];

    printf("Enter your name");
    scanf("%s",name);
    printf("Enter your budget");
    scanf("%d",&amount);

    if(amount>4000)
    {
        singapore(amount,name);
    }
    else if(amount>3000)
    {
        dubai(amount,name);
    }
    else if(amount > 2000)
    {
        paris(amount,name);
    }
    else if(amount>1000)
    {
        goa(amount,name);
    }
    else{
        printf("Sorry you can't travel");
    }

}