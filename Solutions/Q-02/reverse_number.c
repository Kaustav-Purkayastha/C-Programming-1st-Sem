// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

// 2. Write a C program to print the reverse of an integer number.

#include<stdio.h>

void main()
{
    int n, m, num, rev=0;
    printf("\nEnter an integer no.: ");
    scanf("%d", &n);
    num = n;
    while(n!=0)
    {
        m = n%10;
        n = n/10;
        rev = rev*10+m;
    }
    printf("\nThe reverse of %d is %d\n\n", num, rev);
}
