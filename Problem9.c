//Write a C program to enter a number and print it in words.
#include<stdlib.h>
#include<stdio.h>
int main()
{
long n, div, n1;
int flag, digit, count, totaldigits;
printf("\nEnter a number: "); 
scanf("%ld", &n);     
if(n == 0)
  {
    printf("Zero\n");
    exit(0);
  }
if(n > 99999)
  {
     printf("\n please enter a number between 0 and 100000 \n\n");
     exit(0);
  }
totaldigits = 0;
div = 1;
n1 = n;

while ( n1 > 9 ) 
  {
     n1 = n1 / 10;   
     div = div * 10; 
     totaldigits++;   
  }
totaldigits++;
count = totaldigits; 
while ( n != 0 )
  {
     digit = n / div;
     n = n % div;
     div = div / 10;
switch(count) 
{
case 2:
case 5: 
if ( digit == 1 )
{
        flag = 1;
}        
else
{
    flag = 0;
    switch(digit)
        {
         case 2: printf("twenty ");
                      break;
         case 3: printf("thirty ");
                 break;
         case 4: printf("forty ");
                 break;
         case 5: printf("fifty ");
                 break;
         case 6: printf("sixty ");
                 break;
         case 7: printf("seventy ");
                 break;
         case 8: printf("eighty ");
                 break;
         case 9: printf("ninty ");
        }
    
}
break;
case 1:
case 4:
if (flag == 1)
{
 flag = 0;
 switch(digit)
     {
        case 0 : printf("ten ");
                 break;
        case 1 : printf("eleven ");
                 break;
        case 2 : printf("twelve ");
                 break;
        case 3 : printf("thirteen ");
                 break;
        case 4 : printf("fourteen ");
                 break;
        case 5 : printf("fifteen ");
                 break;
        case 6 : printf("sixteen ");
                 break;
        case 7 : printf("seventeen ");
                 break;
        case 8 : printf("eighteen ");
                 break;
        case 9 : printf("nineteen ");
    }
 } 
else 
{
   switch(digit)
     {
        case 1 : printf("one ");
                 break;
        case 2 : printf("two ");
                 break;
        case 3 : printf("three ");
                 break;
        case 4 : printf("four ");
                 break;
        case 5 : printf("five ");
                 break;
        case 6 : printf("six ");
                 break;
        case 7 : printf("seven ");
                 break;
        case 8 : printf("eight ");
                 break;
        case 9 : printf("nine ");
    }
}
if (count == 4)

printf("thousand ");
break;

case 3:
if (digit > 0) 
{
switch(digit) 
    {
        case 1 : printf("one ");
                 break;
        case 2 : printf("two ");
                 break;
        case 3 : printf("three ");
                 break;
        case 4 : printf("four ");
                 break;
        case 5 : printf("five ");
                 break;
        case 6 : printf("six ");
                 break;
        case 7 : printf("seven ");
                 break;
        case 8 : printf("eight ");
                 break;
        case 9 : printf("nine ");
    }
printf("hundred ");
}
break;
}
 count--;
}
if (count == 4 && flag == 0)
{
        printf("thousand");
}
else if (count == 4 && flag == 1)
{
        printf("ten thousand");
}
if (count == 1 && flag == 1)
{
        printf("ten ");
}
return 0;
}