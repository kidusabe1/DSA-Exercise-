
#include <stdio.h>
#include <conio.h>
void creation();
void deposit();
void withdraw();
int a = 0, i = 1001;
struct bank
{
    int no;
    char name[20];
    float bal;
    float dep;
} s[100];

int main()
{
    int ch;
    do
    {
        printf(" \n**************************** ");
        printf(" \nBANKING ");
        printf(" \n**************************** ");
        printf(" \n1. Create New Account ");
        printf(" \n2. Cash Deposit ");
        printf(" \n3. Cash Withdraw ");
        printf(" \n4. Exit ");
        printf(" \nEnter your choice : ");
        scanf("%d ", &ch);
        switch (ch)
        {
        case 1:
            creation();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:;
            break;
        default:
            printf(" Choice a Valid option !! ");
            break;
            getch();
        }
    } while (ch != 5);
    return 0;
}

void creation()
{
    printf(" \n**************************** ");
    printf(" \nNEW ACCOUNT CREATION ");
    printf(" \n**************************** ");
    printf(" \nYour Account Number is :%d ", i);
    s[a].no = i;
    printf(" \nEnter your Name : ");
    scanf("%s ", &s[a].name);
    printf(" \nYour Deposit is Minimum Rs.500");
    s[a].dep = 500;
    a++;
    i++;
    getch();
}
void deposit()
{
    int no, b = 0, m = 0;
    int aa;
    printf(" \n**************************** ");
    printf(" \nCASH DEPOSIT ");
    printf(" \n**************************** ");
    printf(" \nEnter your Account Number : ");
    scanf("%d ", &no);
    for (b = 0; b < i; b++)
    {
        if (s[b].no == no)
            m = b;
    }
    if (s[m].no == no)
    {
        printf("\n Account Number : %d ", s[m].no);
        printf("\n Name : %s ", s[m].name);
        printf("\n Deposit : %f ", s[m].dep);
        printf(" \nDeposited Amount : ");
        scanf("%f ", &aa);
        s[m].dep += aa;
        printf("\nThe Balance in Account is : %f ", s[m].dep);
        getch();
    }
    else
    {
        printf("\nACCOUNT NUMBER IS INVALID ");
        getch();
    }
}
void withdraw()
{
    int no, b = 0, m = 0;
    int aa;
    printf(" \n**************************** ");
    printf(" \nCASH WITHDRAW ");
    printf(" \n**************************** ");
    printf(" \nEnter your Account Number : ");
    scanf("%d ", &no);
    for (b = 0; b < i; b++)
    {
        if (s[b].no == no)
            m = b;
    }
    if (s[m].no == no)
    {
        printf("\n Account Number : %d ", s[m].no);
        printf("\n Name : %s ", s[m].name);
        printf("\n Deposit : %f ", s[m].dep);
        printf(" \nWithdraw Amount : ");
        scanf("%f ", &aa);
        if (s[m].dep < aa + 500)
        {
            printf("\nCANNOT WITHDRAW YOUR ACCOUNT HAS MINIMUM BALANCE ");
            getch();
        }
        else
        {
            s[m].dep -= aa;
            printf("\nThe Balance Amount in Account is : %f ", s[m].dep);
        }
    }
    else
    {
        printf("\nACCOUNT NUMBER IS INVALID ");
        getch();
    }
    getch();
}
