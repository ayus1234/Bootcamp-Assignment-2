//Program to take the amount in INR and convert it into USD

#include<stdio.h>
int main()
{
    int rupee;
    float dollar;
    printf("Enter the amount in INR\n");
    printf("Rs. ");
    scanf("%d",&rupee);
    dollar=rupee/76.23;
    printf("Amount in USD\n");
    printf("$%f",dollar);
    return 0;
}