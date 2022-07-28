#include <stdio.h>
void main()
{
    int first,second,third;
    first=0;
    second=1;
    third=first+second;
    printf("%d, %d, %d, ",first,second,third);
    for(int i=0;i<7;i++)
    {
        first= second;
        second=third;
        third=first+second;
        printf("%d, ",third);
    }
}