//Program to print a given number without its last digit

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    num=num/10;
    printf("The number without last digit is %d",num);
    return 0;
}