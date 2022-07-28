#include <stdio.h>
void main()
{
    int a,b,c;
    printf("provide three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    int largest;
    largest= a>b?a:b;
    largest= b>c?b:c;
    printf("%d is the largest\n",largest);
}