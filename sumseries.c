#include<stdio.h>


/*Write a C program to compute the sum of the first n terms of the series:
S = 1-2+3-4+5.....*/


int series_sum(int n)
{
    if(n%2==0)
        return (-(n/2));
    else
        return ((n+1)/2);
}

void main()
{
    int n;
    printf("\nSeries: 1-2+3-4+5.....N\n\n");
    printf("Enter the no. of terms: ");
    scanf("%d", &n);
    printf("\nSum of the given series is %d\n\n", series_sum(n));
}
