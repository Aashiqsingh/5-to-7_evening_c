#include<stdio.h>
#include<string.h>


struct employee{
    int id;
    char name[20];
    float salary;
    int age;
}e1,e2,e3;

void main()
{
    // struct employee e1,

    printf("Enter id :");
    scanf("%d",&e1.id);
    fflush(stdin);
    printf("Enter name :");
    gets(e1.name);
    printf("Enter salary :");
    scanf("%f",&e1.salary);
    printf("Enter age :");
    scanf("%d",&e1.age);


    printf("The details of employee 1 are:\n");
    printf("Id\tName\tSalary\tAge\n");
    printf("%d\t%s\t%f\t%d\n",e1.id,e1.name,e1.salary,e1.age);


}