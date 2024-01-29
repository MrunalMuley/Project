//Write a program to find even factorial of given number. 

#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iAns=1;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            iAns=iAns*iCnt;
        }
    }
    return iAns;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}