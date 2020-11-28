//  Write a C program to find first and last digit of a number.
#include <stdio.h>
int main()
{
    int n,lastdigit,firstdigit;
    printf("Enter the number : ");
    scanf("%d",&n);
    lastdigit=n%10;
    while(n>10)
    {
        n=n/10;
    }
    firstdigit=n;
    printf("\n The first digit is %d",firstdigit);
    printf("\n The last digit is %d",lastdigit);
    return 0;
}