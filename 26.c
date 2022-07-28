//Q26.	Write a menu driven program to add a data, remove data, and modify data from a structure (name, cgpa).
//Write a program in c to display details of student structure by passing to a function.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
    char name[20];
    int age;
    int section;
    float cgpa;
}student;

void modify1(student* add,int *N)
{
    printf("Name of the student: ");
    scanf("%s",&(add+*N)->name);
    printf("\nAge: ");
    scanf("%d",&(add+*N)->age);
    printf("\nSection: ");
    scanf("%d",&(add+*N)->section);
    printf("\nCGPA: ");
    scanf("%f",&(add+*N)->cgpa);
    *N=*N+1;
    printf("THE UPDATED LIST OF YOUR STUDENTS Is AS FOLLOWS\n");
    for(int i=0;i<*N;i++)
    {
        printf("Student number:%d\n",i+1);
        printf("Name: %s\n",(add+i)->name);
        printf("Age: %d\n",(add+i)->age);
        printf("Section: %d\n",(add+i)->section);
        printf("CGPA: %.2f\n",(add+i)->cgpa);
        printf("\n");
    }
}
void modify3(student* add,int *N)
{
    int choice,num;
    invalid:
    printf("What do you want to modify?\n");
    printf("1. Name\n2. Age\n3. Section\n4. CGPA\n");
    printf("Choose a number associated with your choice\n");
    scanf("%d",&choice);
    printf("give student number:");
    scanf("%d",&num);
    while(num>=1 && num<=*N)
    {
        if(choice==1)
        {
            printf("Give the new name\n");
            scanf("%s",&(add+num-1)->name);
            break;
        }
        else if(choice==2)
        {
            printf("Give the new age of %s\n",(add+num-1)->name);
            scanf("%d",&(add+num-1)->age);
            break;
        }
        else if(choice==3)
        {
            printf("Give the new section of %s\n",(add+num-1)->name);
            scanf("%d",&(add+num-1)->section);
            break;
        }
        else if(choice==4)
        {
            printf("Give the new CGPA of %s\n",(add+num-1)->name);
            scanf("%d",&(add+num-1)->cgpa);
            break;
        }
        else
            printf("Invalid choice please give a valid choice\n");
            goto invalid;
    }
    printf("THE UPDATED LIST OF YOUR STUDENTS Is AS FOLLOWS\n");
    for(int i=0;i<*N;i++)
    {
        printf("Student number:%d\n",i+1);
        printf("Name: %s\n",(add+i)->name);
        printf("Age: %d\n",(add+i)->age);
        printf("Section: %d\n",(add+i)->section);
        printf("CGPA: %.2f\n",(add+i)->cgpa);
        printf("\n");
    }
}

void modify2(student *add, int *N)
{
    int num;
    printf("Which student's data do you want to remove?\n");
    scanf("%d",&num);
    strcpy((add+num-1)->name,"NOT FOUND");
    (add+num-1)->age=0;
    (add+num-1)->section=0;
    (add+num-1)->cgpa=0;
    printf("THE UPDATED LIST OF YOUR STUDENTS Is AS FOLLOWS\n"); 
    for(int i=0;i<*N;i++)
    {
        printf("Student number:%d\n",i+1);
        printf("Name: %s\n",(add+i)->name);
        printf("Age: %d\n",(add+i)->age);
        printf("Section: %d\n",(add+i)->section);
        printf("CGPA: %.2f\n",(add+i)->cgpa);
        printf("\n");
    }
}
int main()
{
    student s1;
    student* ptr;
    ptr=&s1;
    int n;
    int *N=&n;
    printf("How many students do you have?\n");
    scanf("%d",&n);
    ptr=(student *) malloc(100*sizeof(s1));
    for(int i=0;i<n;i++)
    {
        printf("Give the name of student %d\n",i+1);
        scanf("%s",&(ptr+i)->name);
        printf("Give the CGPA of %s\n",(ptr+i)->name);
        scanf("%f",&(ptr+i)->cgpa);
        printf("Give the age and section of %s\n",(ptr+i)->name);
        scanf("%d %d",&(ptr+i)->age,&(ptr+i)->section);
    }
    printf("THE DETAILS OF YOUR STUDENTS Is AS FOLLOWS\n");
    for(int i=0;i<n;i++)
    {
        printf("Student number:%d\n",i+1);
        printf("Name: %s\n",(ptr+i)->name);
        printf("Age: %d\n",(ptr+i)->age);
        printf("Section: %d\n",(ptr+i)->section);
        printf("CGPA: %.2f\n",(ptr+i)->cgpa);
        printf("\n");
    }
    int req;
    printf("What modification do you want to do to the list?\n");
    printf("1. ADD DATA\n");
    printf("2. REMOVE DATA\n");
    printf("3. CHANGE DATA\n");
    printf("CHOOSE THE NUMBER ASSOCIATED WITH YOUR REQUIREMENT\n");
    scanf("%d",&req);
    if(req==1)
        modify1(ptr,N);
    if(req==2)
        modify2(ptr,N);
    if(req==3)
        modify3(ptr,N);
    free(ptr);
    return 0;
}