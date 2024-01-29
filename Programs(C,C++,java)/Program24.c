//Write a program which accept three numbers and print its multiplication

#include<stdio.h>

int Multiply(int iNum1,int iNum2,int iNum3)
{
    int iAns = 1;            
    //if it is 0 then it will not enter in loop
    if (iNum1 != 0)
    {
        iAns = iAns*iNum1;    //if num1 is not equal to zero then multiply
    }
    if (iNum2 != 0)
    {
        iAns = iAns*iNum2;    //if num2 is not equal to zero then multiply
    }
    if (iNum3 != 0)
    {
        iAns = iAns*iNum3;    //if num3 is not equal to zero then multiply
    }

    return iAns;
}
int main()
{
    int iValue1 = 0,iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers:\n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication is: %d",iRet);

    return 0;
}