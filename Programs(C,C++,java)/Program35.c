//Write a program which accept number from user and display its table in reverse order.

#include<stdio.h>

void Table(int iNo)
{
    if(iNo<=0)
    {
        iNo=-iNo;
    }

    int iCnt=0;
    int iAns=1;

    for(iCnt=10;iCnt>=1;iCnt--)
    {
        iAns=iNo*iCnt;
        printf("%d\t",iAns);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}