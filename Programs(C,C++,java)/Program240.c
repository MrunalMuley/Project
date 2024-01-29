#include<stdio.h>

int Mult(int iNo)
{
    static int iDigit=0,iMulti=1;

    if(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;

        iMulti=iMulti*iDigit;

        Mult(iNo);
    }
    return iMulti;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=Mult(iValue);
    printf("%d",iRet);

    return 0;
}