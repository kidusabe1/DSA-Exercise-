#include <stdio.h>
int main()
{
    int n,N=0,digit,flag=0;
    printf("Provide a number\n");
    scanf("%d",&n);
    //we store the reverse in N
    int remainder,multiplier;
    while(n!=0)
    {   
        digit--;
        remainder=n%10; 
        N=(N*10)+remainder;
        n/=10;
    }
    // first check if the entered number is 0 or 1(not prime)
    if(N<=1)
    {
        printf("Number is not prime at all\n");
        return 0;
    }
    // then check if the entered number is twisted prime or not
    for(int i=2;i<N;i++)
    {
        if(N%i==0)
        {
            printf("Number is not a twisted prime\n");
            return 0;
        }
        flag++;
    }
    while(flag!=0)
    {
        printf("%d is a twisted prime\n",N);
        break;
    }
    return 0;
}