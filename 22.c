//Write a program in c to display details of student structure by passing to a function.
#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    char name[20];
    int age;
    int section;
    float cgpa;
}student;

void display(student* sf,int n)
{
    int i,j;
    printf("Students with CGPA at least 9.8 are\n");
    for(i=0;i<n;i++)
    {
        printf("name=> %s\n Age= %d\n Section=%d\n CGPA=%.2f",(sf+i)->name,(sf+i)->age,(sf+i)->section,(sf+i)->cgpa);
        printf("\n");
    }
}
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
        printf("Give the age and section of %s\n",(ptr+i)->name);
        scanf("%d %d",&(ptr+i)->age,&(ptr+i)->section);
    }
    display(ptr,n);
    return 0;
}