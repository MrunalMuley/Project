#include<stdio.h>

int Sum(int iNo)
{
    static int iDigit=0,iSum=0;

    if(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;

        iSum=iSum+iDigit;

        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=Sum(iValue);
    printf("%d",iRet);

    return 0;
}