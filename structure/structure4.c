#include<stdio.h>

struct employee{
    int id;
    char name[20];
    int age;
    float salary;
}e[3];

void create();
void display();
void search(int id){
    int flag=0;
    for(int i=0;i<3;i++)
    {
        if(e[i].id==id)
        {
            printf("\nEmployee Id :%d",e[i].id);
            printf("\nName :%s",e[i].name);
            printf("\nAge :%d",e[i].age);
            printf("\nSalary :%f",e[i].salary);
            flag=0;
        }
        else{
            flag=1;
        }
    }

    if(flag==1)
    {
        printf("\nEmployee not found");
    }
}

void main()
{
    int choice,id;
    while(choice!=5)
    {
        printf("\n1 - Create");
        printf("\n2 - Display");
        printf("\n3 - Search");
        printf("\n5 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: create();
                    break;
            case 2: display();
                    break;
            case 3: printf("\nEnter employee id: ");
                    scanf("%d",&id);
                    search(id);
                    break;
        }
    }

}

void create()
{
    for(int i=0;i<3;i++)
    {
        printf("\nEnter employee id: ");
        scanf("%d",&e[i].id);
        fflush(stdin);
        printf("\nEnter employee name: ");
        scanf("%s",e[i].name);
        printf("\nEnter employee age: ");
        scanf("%d",&e[i].age);
        printf("\nEnter employee salary: ");
        scanf("%f",&e[i].salary);
    }
}

void display()
{
    printf("\n\nEmployee Details\n");
    printf("Id\tName\tAge\tSalary\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\t%s\t%d\t%f\n",e[i].id,e[i].name,e[i].age,e[i].salary);
    }
}