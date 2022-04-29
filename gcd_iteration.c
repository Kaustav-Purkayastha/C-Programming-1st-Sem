#include<stdio.h>


/*Write a C program to calculate GCD of two numbers:
1. Using Recursion, 2. Using Iteration.*/


void main()
{
    int a, b;
    printf("\nEnter two integer numbers: ");
    scanf("%d %d", &a, &b);
    while(a!=b)
    {
        if(a>b)
            a = a-b;
        else
            b = b-a;
    }
    printf("\nGCD of the given two integer numbers is %d\n\n", a);
}
