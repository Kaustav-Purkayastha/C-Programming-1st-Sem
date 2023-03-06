// By - Kaustav Purkayastha ( Gurucharan University, Silchar - @ Department of Computer Science )

/* 11. Write a C program to create a structure Student containing fields for Roll No., Name, Class, Year and Total Marks.
		Create 10 students and store them in a file.	*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student
{
    int rollno;
    char name[20];
    int Class;
    int year;
    int total;
};

void main()
{
    FILE *of;
    of = fopen("abc.txt", "w");
    if (of == NULL)
        {
            fprintf(stderr, "\nError to open the file\n");
            exit(1);
        }
    struct Student S[10];
    int i;
    printf("\nEnter the roll no., name, class, year and total marks of 10 students: ");
    for(i=0; i<10; i++)
    {
        scanf("%d %s %d %d %d", &S[i].rollno, &S[i].name, &S[i].Class, &S[i].year, &S[i].total);
        fwrite(&S[i], sizeof(struct Student), 1, of);
    }
    
    if(fwrite!=0)
        printf("\nContents to file written successfully!\n\n");
    else
        printf("Error writing file!\n");
    fclose(of);
    
	FILE *inf;
    struct Student inp;
    inf = fopen("abc.txt", "r");
    if(inf==NULL)
    {
        fprintf(stderr, "\nError to open the file!\n");
        exit(1);
    }
    while (fread(&inp, sizeof(struct Student), 1, inf))
        printf("Roll No. = %d, Name = %s, Class = %d, Year = %d, Total Marks = %d\n", inp.rollno, inp.name, inp.Class, inp.year, inp.total);
    fclose(inf);
}
