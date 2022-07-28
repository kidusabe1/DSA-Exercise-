//Q21. 	Write a program in c to display name of the student having cgpa > 9.8.
#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    char name[20];
    float cgpa;
}student;

int main()
{
    student s1;
    student* ptr;
    ptr=&s1;
    int n;
    printf("How many students do you have?\n");
    scanf("%d",&n);
    ptr=(student *) malloc(n*sizeof(s1));
    for(int i=0;i<n;i++)
    {
        printf("Give the name of student %d\n",i+1);
        scanf("%s",&(ptr+i)->name);
        printf("Give the CGPA of %s\n",(ptr+i)->name);
        scanf("%f",&(ptr+i)->cgpa);
    }
    int i,j;
    student temp;
    for(i=0;i<n-1;i++)
    {   
        for(j=0;j<n-i-1;j++)
        {
            if((ptr+j)->cgpa > (ptr+j+1)->cgpa)
            {
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
    printf("Students with CGPA at least 9.8 are\n");
    for(i=0;i<n;i++)
    {
        if((ptr+i)->cgpa > 9.8)
        {
            printf("name=> %s with %.2f CGPA",(ptr+i)->name,(ptr+i)->cgpa);
            printf("\n");
        }
    }
    return 0;
}