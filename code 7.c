//Program to find the position of first 1 in LSB

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(i=1;num!=0;i++)
    {
        if(num&1)
           break;
        else
           num=num>>1;
    }
    printf("%d",i);
    return 0;
}