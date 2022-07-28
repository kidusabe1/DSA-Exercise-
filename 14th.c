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
        count=0;
        for(int j=0;j<n;j++)
        {
            if (str[i]==str[j])
            {
                count++;
            }
        }
        if(count<=1)
        {
            printf("%c",str[i]);
        }

    }
    //printf("The number of unique characters in your string %s is %d\n",str,count);
    return 0;
}