// Write a C program to print all ASCII character with their values.
#include <stdio.h>
int main()
{
    int  i;
    for(i=0;i<=255;i++)
    {
        printf("The ASCII value of the %c is %d\n ",i,i);
    }
    return 0;
}
