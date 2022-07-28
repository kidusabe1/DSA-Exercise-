#include <stdio.h>
#include <string.h>
void main()
{
    char a[100],b[100]; 
    printf("Please give 1st word\n");
    gets(a);
    int A=strlen(a);
    printf("Please give 2nd word\n");
    gets(b);
    int B=strlen(b);
    int j=0;
    for(int i=A;i<A+B;i++)
    {
        a[i]=b[j];
        j++;
    }
    puts(a);
}