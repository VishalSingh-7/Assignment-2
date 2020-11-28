//  Write a C program to print multiplication table of any number.
#include <stdio.h>
int main()
{
    int i,n,j;
    printf("Enter the number to print the table:");
    scanf("%d",&n);
    printf("Enter the number of terms you want to print:");
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        printf("\n %d * %d = %d ",n,i,(n*i));
    }
    return 0;
}
