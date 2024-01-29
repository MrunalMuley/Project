//Write a program which accept range from user and return addition of all numbers in between that range. (Range should contains positive numbers only)

#include<stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    int iCnt=0;
    int iSum=0;

    if(iStart<=0 || iEnd<=0)
    {
        printf("Inavlaid range");
    }
    else if(iStart>iEnd)
    {
        printf("Inavalid range");
    }
    else
    {
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        iSum=iSum+iCnt;
    }
     printf("%d\t",iSum);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}