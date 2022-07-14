//Program to swap values of two int variables without using a third variable

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    printf("A = ");
    scanf("%d",&num1);
    printf("B = ");
    scanf("%d",&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\nAfter Swapping\n");
    printf("A = %d\n",num1);
    printf("B = %d",num2);
    return 0;
}