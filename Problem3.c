// Write a C program to find sum of all odd numbers between 1 to n.
#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of the n: ");
    scanf("%d",&n);
    printf("Odd numbers are:");
    for(i=1;i<=n;i++)
    {
        if(i%2 !=0)
        {
            printf(" %d ",i);
            sum=sum+i;
        }

    }
    printf("\n The sum of the odd  numbers is :%d",sum);
    return 0;
}