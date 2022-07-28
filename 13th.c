#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    int count=0;
    printf("Provide a string\n");
    gets(str);
    int n= strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
            count++;
    }
    printf("The number of vowels in your string %s is %d\n",str,count);
    return 0;
}