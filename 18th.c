//Write a program in c to create a date structure within a student structure.
#include <stdio.h>
typedef struct student
{
    char name[20];
    int age;
    struct DOB
    {
        int day;
        int month;
        int year;
    }DOB;
}student;

int main()
{
    student s1;
    printf("Give the name of the student\n");
    scanf("%s",s1.name);
    printf("Give the age of the student\n");
    scanf("%d",&s1.age);
    printf("Give the date of birth in dd/mm/yy format\n");
    scanf("%d %d %d",&s1.DOB.day,&s1.DOB.month,&s1.DOB.year);
    printf("Your entry is as follows=>\n");
    printf("Name: %s\n",s1.name);
    printf("Age: %d\n",s1.age);
    printf("DOB: %d/%d/%d\n",s1.DOB.day,s1.DOB.month,s1.DOB.year);
    return 0;
}