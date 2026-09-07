#include<stdio.h>
void science(int per,char name[])
{
    printf("%s your admission confirm in science stream with per = %d",name,per);
}

void commerce(int per,char name[]){
    printf("\n%s your admission confirm in commerce stream with per = %d",name,per);
}

void arts(int per,char name[]){
    printf("\n%s your admission confirm in arts stream with per = %d",name,per);
}


void admission(char name[],int percentage)
{

    if(percentage > 90)
    {
        science(percentage,name);
    }
    else if(percentage > 70)
    {
        commerce(percentage,name);
    }
    else if(percentage > 50)
    {
        arts(percentage,name);
    }
    else
    {
        printf("Sorry you are not admitted in any stream");
    }
}


void main()
{
    int per = 92;
    char name[] = "priya";


    admission(name,per);

}