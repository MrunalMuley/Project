#include<stdio.h>

int Min(int iNo)
{
    static int iDigit=0,iMin=9;

    if(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;

        if(iMin>iDigit)  
        {
            iMin=iDigit;
        }      

        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=Min(iValue);
    printf("%d",iRet);

    return 0;
}