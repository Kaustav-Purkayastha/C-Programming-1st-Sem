// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

/* 8. Write a C program to calculate GCD of two numbers:
		(i) Using Iteration.		*/


#include<stdio.h>

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
