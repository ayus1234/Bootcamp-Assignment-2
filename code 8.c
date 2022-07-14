//Program to check whether the given number is even or odd using a bitwise operator

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num&1)
       printf("%d is an Odd Number",num);
    else
       printf("%d is an Even Number",num);
    return 0;
}