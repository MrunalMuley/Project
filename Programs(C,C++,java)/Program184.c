#include <stdio.h>
#include <stdbool.h>

bool ChkBit(int iNo)
{
    int iResult=0;
    int iMask=0x80000001;

    iResult=iNo & iMask;
    if(iResult==iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);
    if(bRet==true)
    {
        printf("First and Last Bits are ON");
    }
    else
    {
        printf("First and Last Bits are OFF");
    }
    
    return 0;
}