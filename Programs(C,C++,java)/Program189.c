#include <stdio.h>
#include <stdbool.h>

int OnBit(int iNo)
{
    int iResult=0;
    int iMask=0x0000000F;

    iResult=iNo & iMask;

    if(iResult!=iMask)
    {
        return (iNo|iMask);
    }
    else
    {
        return iNo;
    }
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=OnBit(iValue);
    printf("Modified number is:%d",iRet);
    
    return 0;
}