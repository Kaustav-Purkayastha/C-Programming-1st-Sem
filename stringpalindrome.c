#include<stdio.h>
#include<string.h>

//Write a C function that checks whether a given string is palindrome or not.

int palindrome();

void main()
{
    int x;
    x = palindrome();
    if(x==0)
        printf("\nThe given word is a palindrome!\n\n");
    else
        printf("\nThe given word is not a palindrome!\n\n");
}

int palindrome(void)
{
    int z,i, j=0;
    char S1[20], S2[20];
    printf("\nEnter a word: ");
    scanf("%s", S1);
    for(i=(strlen(S1)-1); i>=0; i--)
    {
        S2[j] = S1[i];
        j++;
    }
    S2[j] = '\0';
    z = strcmp(S1, S2);
    return z;
}
