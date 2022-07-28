#include <stdio.h>
int swap_address(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}

int main()
{
    int x,y;
    printf("Give the first and second number respectively\n");
    scanf("%d %d",&x,&y);
    int *M=&x;
    int *N=&y;
    printf("The values BEFORE swap(pass by address)==> %d & %d\n",x,y);
    printf("\n\n\n\n");
    swap_address(M,N);
    printf("The values AFTER swap(pass by address)==> %d & %d\n",x,y);
    printf("\n\n\n\n");
    return 0;
}