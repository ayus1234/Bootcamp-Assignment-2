//Program to make the last digit of a number stored in a variable as zero

#include<stdio.h>
int main()
{
    int num,temp,last_zero;
    printf("Enter any number\n");
    scanf("%d",&num);
    temp=num%10;
    last_zero=num-temp;
    printf("%d",last_zero);
    return 0;
}