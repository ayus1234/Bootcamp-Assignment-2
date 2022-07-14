//Program to swap values of two int variables

#include<stdio.h>
int main()
{
    int num1,num2,swap;
    printf("Enter two numbers\n");
    printf("A = ");
    scanf("%d",&num1);
    printf("B = ");
    scanf("%d",&num2);
    swap=num1;
    num1=num2;
    num2=swap;
    printf("\nAfter Swapping\n");
    printf("A = %d\n",num1);
    printf("B = %d",num2);
    return 0;
}