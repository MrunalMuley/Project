#include<stdio.h>

int Max(int iNo)
{
    static int iDigit=0,iMax=0;

    if(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;

        if(iMax<iDigit)  
        {
            iMax=iDigit;
        }      

        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=Max(iValue);
    printf("%d",iRet);

    return 0;
}