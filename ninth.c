#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    printf("Array before sliding window\n");
    for(int i=0;i<6;i++)
    {
        printf("%d, ",arr[i]);
    }
    int temp;
    for(int i=0;i<6;i+=2)
    {
        if(i+1>5)
        {
            goto out;
        }
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    out:
    printf("Array after sliding window implementation\n");
    for(int i=0;i<6;i++)
    {

        printf("%d, ",arr[i]);
    }

}