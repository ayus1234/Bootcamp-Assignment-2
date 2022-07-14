//Program to print unit digit of a given number

#include<stdio.h>
int main()
{
    int num,unit;
    printf("Enter the number\n");
    scanf("%d",&num);
    unit=num%10;
    printf("Unit Digit of %d is %d",num,unit);
    return 0;
}