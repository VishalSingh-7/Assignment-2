//  Write a C program to print all even numbers between 1 to 100.
#include <stdio.h>
int main()
{
    int i;
    printf("Even numbers are:");
    for(i=1;i<=100;i++)
    {
       if(i%2==0)
       {
           printf(" %d ",i);
       }
    }
    return 0;
}