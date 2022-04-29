#include<stdio.h>


/*Write a C program to calculate GCD of two numbers:
1. Using Recursion, 2. Using Iteration.*/


int gcd(int, int);

void main()
{
    int x, y, z;
    printf("\nEnter two integer numbers: ");
    scanf("%d %d", &x, &y);
    z = gcd(x, y);
    printf("\nGCD of the given two integer numbers is %d\n\n", z);
}

int gcd(int a, int b)
{
    if(b!=0)
        return gcd(b, a%b);
    else
        return a;
}
