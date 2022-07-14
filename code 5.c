//Program to input a three-digit number and display the sum of the digits

#include<stdio.h>
int main()
{
    int num,temp1,temp2;
    printf("Enter any three digit number\n");
    scanf("%d",&num);
    temp1=num%10;
    num=num/10;
    temp2=num%10;
    num=num/10;
    num=temp1+temp2+num;
    printf("Sum is %d",num);
}