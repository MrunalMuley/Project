#include<stdio.h>
#define TRUE 1
#define FALSE 0 

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo%2==0)
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
    auto int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    if(bRet == TRUE)
    {
        printf("%d is an even number\n",iValue);
    }
    else
    {
        printf("%d is an odd number\n",iValue);
    }

    return 0; 
}