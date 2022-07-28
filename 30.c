//Q30.	Write a program in c to display rank particular of student from the structure (roll, name, m1,m2,m3, grade, rank).	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
    char name[20];
    int m1;
    int m2;
    int m3;
    int m4;
    int grade;
}student;

int main()
{
    student s1;
    student* ptr;
    ptr=&s1;
    int n;
    char rank_of[20];
    printf("How many students do you have?\n");
    scanf("%d",&n);
    ptr=(student *) malloc(n*sizeof(s1));
    for(int i=0;i<n;i++)
    {
        printf("Give the name of student %d\n",i+1);
        scanf("%s",&(ptr+i)->name);
        printf("Give the m1 result of %s\n",(ptr+i)->name);
        scanf("%d",&(ptr+i)->m1);
        printf("Give the m2 result of %s\n",(ptr+i)->name);
        scanf("%d",&(ptr+i)->m2);
        printf("Give the m3 result of %s\n",(ptr+i)->name);
        scanf("%d",&(ptr+i)->m3);
        printf("Give the m4 result of %s\n",(ptr+i)->name);
        scanf("%d",&(ptr+i)->m4);
        (ptr+i)->grade=(ptr+i)->m1+(ptr+i)->m2+(ptr+i)->m3+(ptr+i)->m4;
    }
    //Sorting based on total grade
    int i,j;
    student temp;
    for(i=0;i<n-1;i++)
    {   
        for(j=0;j<n-i-1;j++)
        {
            if((ptr+j)->grade < (ptr+j+1)->grade)
            {
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
    printf("Which student's rank do you want to see\n");
    scanf("%s",rank_of);
    for(i=0;i<n;i++)
    {
        if(strcmp(rank_of,(ptr+i)->name)==0)
            printf("The rank of %s is %d\n",(ptr+i)->name,i+1);
    }
    return 0;
}