// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

/* 7. Write a C program to display Factorial series:
		(i) Using Iteration		*/


#include<stdio.h>

void main()
{
    int n, i, f=1;
    printf("\nEnter an integer number: ");
    scanf("%d", &n);
    for(i=n; i>=1; i--)
        f = f*i;
    printf("\nThe factorial of the given integer number is %d\n\n", f);
}
