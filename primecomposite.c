#include<stdio.h>


/*Write a C function to find whether a given number is prime or not.
Use the same to generate the prime numbers less than 100.*/


void primecomposite(int);

void main()
{
    int n, i, I;
    printf("\nEnter an integer number: ");
    scanf("%d", &n);
    primecomposite(n);
    printf("\n\nPrime Numbers less than 100 are:\n\n");
    for(n=1; n<100; n++)
    {
        I=0;
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                I++;
                break;
            }
        }
        if(I==0 && n!=1)
            printf("%d ", n);
    }
    printf("\n\n");
}

void primecomposite(int a)
{
    int I=0, i;
    for(i=2; i<a/2; i++)
    {
        if(a%i==0)
        {
            I=1;
            break;
        }
    }
    if(I==1)
        printf("\nThe given number is composite!\n");
    else
        printf("\nThe given number is prime!\n");
}
