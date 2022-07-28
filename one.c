#include <stdio.h>
void main()
{
    int a,b;
    printf("provide two numbers\n");
    scanf("%d %d",&a,&b);
    while((a-b)>0)
    {
        printf("%d is greater\n",a);
        break;
    }
    while((a-b)<0)
    {
        printf("%d is greater\n",b);
        break;
    }
    while((a-b)==0)
    {
        printf("%d and %d are equal\n",a,b);
        break;
    }
}