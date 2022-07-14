/*Program to input a number from the user and also input a digit. Append a digit in the number and
  print the resulting number.

*/

#include<stdio.h>
int main()
{
    int num,digit,append;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Enter the digit\n");
    scanf("%d",&digit);
    append=num*10+digit;
    printf("The Appended Digit is %d",append);
    return 0;
}