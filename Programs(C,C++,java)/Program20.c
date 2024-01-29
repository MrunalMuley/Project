//Write a program which accept number from user and return difference between summation of all its factors and non factors.

# include <stdio.h>

int FactDiff(int iNo)
{
    if (iNo<=0)
    {
        iNo=-iNo;
    }

    int iCnt=0;
    int iSum=0;
    int iSum1=0;
    int iDiff=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo % iCnt)!=0)
        { 
            iSum=iSum+iCnt;
        }
    }
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if((iNo % iCnt)==0)
        { 
            iSum1=iSum1+iCnt;
        }
    }
    iDiff=iSum1-iSum;
    return iDiff;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("Difference between factor and non factor:%d\n",iRet);

    return 0;
}