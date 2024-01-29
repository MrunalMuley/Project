#include <stdio.h>
#include <stdbool.h>

bool ChkBit(int iNo)
{
    int iResult=0;
    int iMask=0x08104040;

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
        printf("7th, 15th, 21st, 28th Bits are ON");
    }
    else
    {
        printf("7th, 15th, 21st, 28th Bits are OFF");
    }
    
    return 0;
}