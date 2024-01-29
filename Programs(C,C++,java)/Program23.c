//Write a program which accept two numbers and check whether numbers are equal or not. 


#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNum1,int iNum2)
{
    if(iNum1==iNum2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter two numbers:\t");
    scanf("%d %d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet==TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }
    return 0;
}