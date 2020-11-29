// Write a C program to find frequency of each digit in each integer.
#include <stdio.h>
int main()
{
    int long long num;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,rev;
    printf("Enter the number :");
    scanf("%lld",& num);
    while(num>0)
    {
        rev=num%10;
        num=num/10;
        switch(rev)
        {
            case 0:
                    a++;
                    break;
            case 1:
                    b++;
                    break;
            case 2:
                    c++;
                    break;
            case 3:
                    d++;
                    break;
            case 4:
                    e++;
                    break;
            case 5:
                    f++;
                    break;
            case 6:
                    g++;
                    break;
            case 7:
                    h++;
                    break;
            case 8:
                    i++;
                    break;
            case 9:
                    j++;
                    break;
        }
    }
    printf("\n 0 is repeating %d times",a);
    printf("\n 1 is repeating %d times",b);
    printf("\n 2 is repeating %d times",c);
    printf("\n 3 is repeating %d times",d);
    printf("\n 4 is repeating %d times",e);
    printf("\n 5 is repeating %d times",f);
    printf("\n 6 is repeating %d times",g);
    printf("\n 7 is repeating %d times",h);
    printf("\n 8 is repeating %d times",i);
    printf("\n 9 is repeating %d times",j);
    return 0;
}