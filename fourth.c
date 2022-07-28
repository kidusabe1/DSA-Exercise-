#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    printf("Give a number\n");
    scanf("%d",&n);
    int digit,num=n,sum;
    // We are determining the order of the number entered
    while(num!=0)
    {
        num=num/10;
        digit++;
    }
    int rem;
    num=n;
    //We are finding the sum of every number powered with the order
    while(num!=0)
    {
        rem= num%10;
        sum=sum+ pow(rem,digit);
        num=num/10;
    }
    if(sum==n)
    {
        printf("Yes, your number is armstrong number\n");
    }
    else
        printf("your number is not an armstrong number\n");
}