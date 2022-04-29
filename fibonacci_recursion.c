#include<stdio.h>


/*Write a C program to display Fibonacci Series:
1. Using Recursion, 2. Using Iteration.*/


int fibo(int);

void main()
{
    int n, i, N;
    printf("\nHow many numbers you want to generate: ");
    scanf("%d", &n);
    printf("\n");
    for(i=0; i<n; i++)
    {
        N = fibo(i);
        printf(" %d", N);
    }
    printf("\n\n");
}

int fibo(int n)
{
    if(n<=1)
        return n;
    else
        return (fibo(n-1)+fibo(n-2));
}
