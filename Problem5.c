//  Write a C program to count number of digits in a number.
#include <stdio.h>
int main()
{
    int n,count=0,num;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        num=n%10;
        n=n/10;
        count=count+1;
    }
    printf("The Numbers of the digit in the given number is %d",count);
    return 0;
    
}