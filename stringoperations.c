#include<stdio.h>
#include<string.h>
#include<stdlib.h>


/*Write a C program to perform the following operations on strings:
1. String Concatenation, 2. Compare two strings, 3. Calculate the length of the strings.*/


void main()
{
    char S1[10], S2[10], S3[10], S4[10];
    int n, k, x, y, z;
    printf("\nEnter the first string: ");
    scanf("%s", S1);
    printf("\nEnter the second string: ");
    scanf("%s", S2);
    strcpy(S3, S1);
    strcpy(S4, S2);

    choice:
        printf("\n\nChoice: ");
        printf("\n1. Press 1 to perform the concatenation of the given strings.");
        printf("\n2. Press 2 to perform the comparison of the given strings.");
        printf("\n3. Press 3 to calculate the length of the given strings.");
        printf("\n4. Press 4 to exit the program.\n");
        printf("\nEnter your choice: ");
        scanf("%d", &n);

        switch(n)
        {
        case 1:
            {
                strcat(S1, S2);
                printf("\nThe Concatenated String of the given two strings is %s\n\n", S1);
                break;
            }
        case 2:
            {
                k = strcmp(S3, S4);
                if(k==0)
                    printf("\nThe given two strings are same.\n\n");
                else
                    printf("\nThe given two strings are not same.\n\n");
                break;
            }
        case 3:
            {
                x = strlen(S3);
                y = strlen(S4);
                z = strlen(S1);
                printf("\nThe Length of the First String is %d\n", x);
                printf("\nThe Length of the Second String is %d\n", y);
                printf("\nThe Length of the Concatenated String is %d\n\n", z);
                break;
            }
        case 4:
            printf("\nExiting the program...\n");
            exit(0);
        default:
            printf("\nInvalid Choice!!!\n");
        }

    goto choice;
}
