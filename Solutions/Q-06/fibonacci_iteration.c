// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

/* 6. Write a C program to display Fibonacci Series:
		(i) Using Iteration.		*/


#include<stdio.h>

void main()
{
    int n, i, n1=0, n2=1, n3;
    printf("\nHow many numbers you want to generate: ");
    scanf("%d", &n);
    printf("\n");
    if(n==1)
        printf("%d", n1);
    else if(n==2)
        printf("%d %d", n1, n2);
    else
    {
        printf("%d %d", n1, n2);
        for(i=3; i<=n; i++)
        {
            n3 = n1+n2;
            printf(" %d",n3);
            n1 = n2;
            n2 = n3;
        }
    }
    printf("\n\n");
}
