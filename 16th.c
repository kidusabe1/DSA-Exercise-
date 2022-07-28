//Write a program in c to return maximum and minimum out of three numbers from one function.
#include <stdio.h>
int maximum(int x,int y,int z)
{
    int largest;
    largest= x>y?x:y;
    largest= largest>z?largest:z;
    return largest;
}

int main()
{
    int a,b,c;
    printf("Provide three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("The greatest of the numbers you have provided is %d\n",maximum(a,b,c));
    return 0;
}