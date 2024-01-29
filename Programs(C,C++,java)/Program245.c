#include<stdio.h>

int Reverse(int iNo)
{
    static int iDigit=0,iReverse=0;

    if(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iReverse=(iReverse*10)+iDigit;

        Reverse(iNo);
    }
    return iReverse;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=Reverse(iValue);
    printf("%d",iRet);

    return 0;
}