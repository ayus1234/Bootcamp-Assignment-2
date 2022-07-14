//Program to take a three-digit number from the user and rotate its digits by one position towards the right

#include<stdio.h>
int main()
{
    int num,temp,rotate_right;
    printf("Enter any three digit number\n");
    scanf("%d",&num);
    temp=num%10;
    num=num/10;
    rotate_right=temp*100+num;
    printf("%d",rotate_right);
    return 0;
}