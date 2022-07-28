#include <stdio.h>
int main()
{
    int n,count=0;
    printf("Give a number=>");
    scanf("%d",&n);
    starting:
    switch(n/=10)
    {
        case 0:
            count++;
            goto ending;
        default:
            count++;
            goto starting;
    }
    goto starting;
    ending:
    printf("The number of digits is %d",count);
    return 0;
}