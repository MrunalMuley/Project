//Write a program which accept accept range from user and display all numbers in between that range in reverse order.

#include<stdio.h>
void RangeDisplayRev(int iStart , int iEnd)
{
    int iCnt=0;
    if(iStart>iEnd)
    {
        printf("Inavlaid range");
    }
    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}