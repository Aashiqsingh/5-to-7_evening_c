#include<stdio.h>

struct student{
    int roll;
    char name[20];
    int age;
};

void addStudent(struct student s[])
{
    FILE *fp;
    fp = fopen("../structure/student.txt","w");
    if(fp == NULL)
    {
        printf("File not found");
    }
    for(int i=0;i<3;i++)
    {
        printf("Enter roll : ");
        scanf("%d",&s[i].roll);
        fflush(stdin);
        printf("Enter name : ");
        gets(s[i].name);
        printf("Enter age : ");
        scanf("%d",&s[i].age);

        fprintf(fp,"%d %s %d\n",s[i].roll,s[i].name,s[i].age);
        
    }
    fclose(fp);
}

void displayStudent(struct student s[])
{
    FILE *fp;
    fp = fopen("../structure/student.txt","r");
    if(fp == NULL)
    {
        printf("File not found");
    }
    else{
        printf("File opened successfully");

        printf("\nRoll\tName\tAge\n");
        for(int i=0;i<3;i++)
        {
            fscanf(fp,"%d %s %d",&s[i].roll,s[i].name,&s[i].age);
            printf("%d\t%s\t%d\n",s[i].roll,s[i].name,s[i].age);
        }
        fclose(fp);
    }
}

void main()
{
    struct student s[3];

    printf("1 - Add Student");
    printf("\n2 - Display Student");
    printf("\nEnter your choice : ");
    int choice;
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: addStudent(s);
                break;
        case 2: displayStudent(s);
                break;
    }
}