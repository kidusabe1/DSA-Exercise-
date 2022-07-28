//Q28.	 Write a program in c to display cgpa from the structure (name, cgpa), and the name can be determine from the structure (name, roll), the roll number is searching key.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
    char name[20];
    int age;
    int rollnumber;
    float cgpa;
}student;

void locate(student* sf,int n,int find)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(find==(sf+i)->rollnumber)
        {
            printf("The CGPA of %s is=>%.2f\n",(sf+i)->name,(sf+i)->cgpa);
        }
    }
}

int main()
{
    student s1;
    student* ptr;
    ptr=&s1;
    int n;
    int find;
    printf("How many students do you have?\n");
    scanf("%d",&n);
    ptr=(student *) malloc(n*sizeof(s1));
    for(int i=0;i<n;i++)
    {
        printf("Give the name of student %d\n",i+1);
        scanf("%s",&(ptr+i)->name);
        printf("Give the CGPA of %s\n",(ptr+i)->name);
        scanf("%f",&(ptr+i)->cgpa);
        printf("Give the age and rollnumber of %s\n",(ptr+i)->name);
        scanf("%d %d",&(ptr+i)->age,&(ptr+i)->rollnumber);
    }
    printf("Give the rollnumber of your required student\n");
    scanf("%d",&find);
    locate(ptr,n,find);
    free(ptr);
    return 0;
}