//Write a C program to swap first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main()
{
    int n, swap;
    int firstdigit, lastdigit, digits;
    printf("Enter the  number: ");
    scanf("%d", &n);
    lastdigit  = n % 10;
    digits = (int)log10(n); 
    firstdigit = (int)(n/ pow(10, digits)); 

    swap  = lastdigit;
    swap *= (int) pow(10, digits);
    swap += n % ((int) pow(10, digits));
    swap -= lastdigit;
    swap += firstdigit;

    printf("\n Original Number= %d", n);
    printf("\n Number after swapping first and last digit: %d", swap);

    return 0;
}