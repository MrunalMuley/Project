#include <stdio.h>
#include <stdbool.h>

bool ChkBit(int iNo)
{
    int iResult=0;
    int iMask=0x000001c0;

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
        printf("7th, 8th, 9th Bits are ON");
    }
    else
    {
        printf("7th, 8th, 9th Bits are OFF");
    }
    
    return 0;
}