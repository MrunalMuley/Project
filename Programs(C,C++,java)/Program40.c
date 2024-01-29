//Write a program which returns difference between Even factorial and odd factorial of given number. 

#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iAns=1;
    int iAns2=1;
    int iDiff=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)==0)
        {
            iAns=iAns*iCnt;
        }
        else if((iCnt%2)!=0)
        {
            iAns2=iAns2*iCnt;
        }
    }
    
    iDiff=iAns-iAns2;
    return iDiff;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}