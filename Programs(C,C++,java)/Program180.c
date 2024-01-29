#include <stdio.h>
#include <stdbool.h>

bool ChkBit(int iNo)
{
    int iResult=0;
    int iMask=0x00004000;

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
        printf("15th Bit is ON");
    }
    else
    {
        printf("15th Bit is OFF");
    }
    
    return 0;
}