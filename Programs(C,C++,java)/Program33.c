//Write a program to find factorial of given number. 

#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo<=0)
    {
        iNo=-iNo;
    }

    int iCnt=0;
    int iAns=1;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iAns=iAns*iCnt;
    }
    return iAns;
}

int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter number:");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);
    
    printf("Factorial of number is %d",iRet);
    
    return 0;
}