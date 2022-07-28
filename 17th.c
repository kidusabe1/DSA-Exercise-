//Write a program in c to return maximum when the function called first time and minimum when the function called second time.
#include <stdio.h>
int count=0;
int compare(int a,int b)
{
    int largest,minimum;
    count++;
    if(count==1)
    {
        largest=a>b?a:b;
        return largest;
    }
    if(count!=1)
        minimum=a<b?a:b;
    return minimum;
}

int main()
{
    int x,y;
    printf("please give two numbers\n");
    scanf("%d %d",&x,&y);
    printf("The maximum of the numbers is %d\n",compare(x,y));
    printf("The minimum of the numbers is %d\n",compare(x,y));
}