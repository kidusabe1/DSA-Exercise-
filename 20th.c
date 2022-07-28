//Q20.	Write a program in c to join the elements of two structures.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct one{
    int var1;
    char var2[20];
}one;

typedef struct two{
    int blu1;
    char blu2[20];
}two;

typedef struct combine{
    int add;
    char merge[40];
}combine;
int main()
{
    one instance_1;
    instance_1.var1=1111;
    strcpy(instance_1.var2,"First");
    printf("Details of first struct variable are:\n");
    printf("Integer value of %d and string value of %s\n",instance_1.var1,instance_1.var2);
    printf("\n");
    two instance_2;
    instance_2.blu1=2222;
    strcpy(instance_2.blu2,"second");
    printf("Details of second struct variable are:\n");
    printf("Integer value of %d and string value of %s\n",instance_2.blu1,instance_2.blu2);
    printf("\n");
    combine added;
    added.add= instance_1.var1+instance_2.blu1;
    strcat(added.merge,instance_1.var2);
    strcat(added.merge,instance_2.blu2);
    printf("When we combine the two structs elements together and form a new struct variable we get:::\n");
    printf("Integer value of %d and string value of %s\n",added.add,added.merge);
    return 0;
}