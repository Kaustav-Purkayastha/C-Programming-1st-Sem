#include<stdio.h>

//Write a C program to print the sum and product of the digits of an integer number.

void main()
{
    int n, m, sum=0, prod=1;
    printf("\nEnter an integer number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        m = n%10;
        n = n/10;
        sum = sum+m;
        prod = prod*m;
    }
    printf("\nThe Sum of the digits of the given number is %d\n", sum);
    printf("\nThe Product of the digits of the given number is %d\n\n", prod);
}
