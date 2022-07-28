//Q25.	Write a program in c to display name and cgpa where the name contains only one vowel “E”.#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
typedef struct student
{
    char name[20];
    int age;
    int section;
    float cgpa;
}student;

void E_locate(student* sf,int n,char name[])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strstr((sf+i)->name,name)!=NULL)
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
    char find[]="E";
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
    E_locate(ptr,n,find);
    return 0;
}