#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void genrateOtp()
{
    FILE *fp;

    fp = fopen("otp.txt","w");
    if(fp == NULL)
    {
        printf("File not found");
    }
    else{
        printf("File opened successfully");
        srand(time(0));
        int otp = rand()%9000 + 1000;
        // printf("Your OTP is : %d",otp);
        fprintf(fp,"%d",otp);
        fclose(fp);
    }
}

void displayOtp()
{
    FILE *f;
    f = fopen("otp.txt","r");
    if(f == NULL)
    {
        printf("File not found");
    }
    else{
        printf("File opened successfully");
        int otpread;
        fscanf(f,"%d",&otpread);
        printf("Your OTP is : %d",otpread);
        fclose(f);
    }
}


void main()
{
    printf("1 - Generate OTP");
    printf("2 - Display OTP");
    printf("\nEnter your choice : ");
    int ch;
    scanf("%d",&ch);

    switch(ch){
        case 1: genrateOtp();
                break;
        case 2: displayOtp();
                break;
    }
}