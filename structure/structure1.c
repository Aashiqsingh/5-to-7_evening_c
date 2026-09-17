#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[20];
    float marks;
};


void main()
{
    // struct student s1;
    struct student s1,s3;
    struct student s2;
    s1.roll = 121;
    strcpy(s1.name,"priya");
    s1.marks = 99.87;


    s2.roll = 122;
    strcpy(s2.name,"shreya");
    s2.marks = 88.88;


    printf("Roll no: %d\n",s1.roll);
    printf("Name: %s\n",s1.name);
    printf("Marks: %f\n",s1.marks);

    printf("Roll no: %d\n",s2.roll);
    printf("Name: %s\n",s2.name);
    printf("Marks: %f\n",s2.marks);
}