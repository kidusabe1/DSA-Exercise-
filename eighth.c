#include <stdio.h>
#include <string.h>
int main()
{
    char arr[30];
    printf("Please give a string\n");
    scanf("%s",arr);
    int n=strlen(arr),count;
    char *ptr=arr;
    //getting the actual size of given string
    while(*ptr!='\0')
    {   
        count++;
        ptr++;
    }
    char brr[30];
    //storing the reverse in a new string
    for(int i=count-1;i>=0;i--)
    {
        static int j=0;
        brr[j]=arr[i];
        j++;
    }
    printf("%s",brr);
    return 0;
}