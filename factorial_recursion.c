#include<stdio.h>


/*Write a C program to display Factorial series:
1. Using Recursion, 2.Using Iteration*/


int fact(int);

void main()
{
    int n, z;
    printf("\nEnter an integer number: ");
    scanf("%d", &n);
    z = fact(n);
    printf("\nThe factorial of the given integer number is %d\n\n", z);
}

int fact(int a)
{
    if(a==0)
        return 1;
    else
        return (a*fact(a-1));
}
