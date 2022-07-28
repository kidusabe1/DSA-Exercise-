//Q29. 	Write a program in c to display common information of two same type of structure.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct class_one{
    char name[20];
    int age;
    int rollnumber;
}class_one;

typedef struct class_two{
    char name[20];
    int age;
    int rollnumber;
}class_two;

int main()
{
    int one_num,two_num;
    printf("How many students are there in class one\n");
    scanf("%d",&one_num);
    printf("How many students are there in class two\n");
    scanf("%d",&two_num);
    class_one* ptr1=(class_one*) malloc(one_num*sizeof(class_one));
    class_two* ptr2=(class_two*) malloc(two_num*sizeof(class_two));
    printf("Give the details of class 1 students\n");
    for(int i=0;i<one_num;i++)
    {
        printf("Give the name of student %d\n",i+1);
        scanf("%s",&(ptr1+i)->name);
        printf("Age of %s\n",(ptr1+i)->name);
        scanf("%d",&(ptr1+i)->age);
        printf("Roll number\n");
        scanf("%d",&(ptr1+i)->rollnumber);
    }
    printf("Give the details of class 2 students\n");
    for(int i=0;i<two_num;i++)
    {
        printf("Give the name of student %d\n",i+1);
        scanf("%s",&(ptr2+i)->name);
        printf("Age of %s\n",(ptr2+i)->name);
        scanf("%d",&(ptr2+i)->age);
        printf("Roll number\n");
        scanf("%d",&(ptr2+i)->rollnumber);
    }
    for(int i=0;i<one_num;i++)
    {
        for(int j=0;j<two_num;j++)
        {
            if(strcmp((ptr2+j)->name,(ptr1+i)->name)==0)
                printf("The name %s is found in two classes\n",(ptr1+i)->name);
            if((ptr1+i)->age==(ptr2+j)->age)
                printf("%s in class 1 and %s in class 2, have the same age of %d\n",(ptr1+i)->name,(ptr2+j)->name,(ptr1+i)->age);
            if((ptr1+i)->rollnumber==(ptr2+j)->rollnumber)
                printf("%s in class 1 and %s in class 2 have the same rollnumber of %d\n",(ptr1+i)->name,(ptr2+j)->name,(ptr1+i)->rollnumber);
        }
    }
    free(ptr1);
    free(ptr2);
    return 0;
}