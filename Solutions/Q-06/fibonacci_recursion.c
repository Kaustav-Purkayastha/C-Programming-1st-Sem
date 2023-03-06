// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

/* 6. Write a C program to display Fibonacci Series:
		(ii) Using Recursion.		*/


#include<stdio.h>

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
        return (fibo(n-1) + fibo(n-2));
}
