#include <stdio.h>
int main()
{
    int n,arr[]={1,2,3,4,5,6,7,8,15},sum=0,i,j,k,m,count=1;
    int size=sizeof(arr)/sizeof(int);
    printf("Give a number\n");
    scanf("%d",&n);
    //to iterate the beginning of the subarray
    for(i=0;i<size;i++)
    {
        //to iterate the ending of the subarray
        for(j=0;j<size;j++)
        {
            //checking the sum of beginning and last element of the subarray
            if(arr[i]+arr[j]==n)
            {
                printf("The entered number is the sum of %d and %d\n",arr[i],arr[j]);
            }
            //checking the sum of the lements between the subarray
            sum=0;
            count=0;
            for(k=i;k<=j;k++)
            {
                sum=sum+arr[k];
                count++;
                //printf("sum=%d\n",sum);
            }
            //checking the sum of the lements between the subarray
                if(sum==n && count!=1)
                {
                    printf("The entered number is the sum of ");
                    for(m=i;m<=j;m++)
                    {
                        printf("%d, ",arr[m]);
                    }
                    printf("\n");
                }
        }
    }
    return 0;
}