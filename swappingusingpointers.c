#include<stdio.h>

//Write a C program that swaps two numbers using pointers.

void swap(int *, int *);

void main()
{
    int a, b;
    printf("\nEnter two integer nos.: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore swapping: a = %d, b = %d", a, b);
    swap(&a, &b);
    printf("\n\nAfter swapping: a = %d, b = %d\n\n", a, b);
}

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
