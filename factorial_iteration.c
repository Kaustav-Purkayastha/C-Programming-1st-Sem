#include<stdio.h>


/*Write a C program to display Factorial series:
1. Using Recursion, 2.Using Iteration*/


void main()
{
    int n, i, f=1;
    printf("\nEnter an integer number: ");
    scanf("%d", &n);
    for(i=n; i>=1; i--)
        f = f*i;
    printf("\nThe factorial of the given integer number is %d\n\n", f);
}
