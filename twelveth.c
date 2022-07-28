#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[]="My name is kidus abebe\n";
    char *ptr=string;
    char *found;
    char tolookfor[30];
    printf("GIve the string you are looking for\n"); 
    gets(tolookfor);
    found=strstr(string,tolookfor);
    if(found!=NULL)
    {
        printf("Your string is found at %p address\n",found);
    }
    else
        printf("NOT FOUND!\n");
}