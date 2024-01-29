//Accept amount in US dollar and return its corresponding value in Indian currency.Consider 1$ as 70 rupees. 

#include<stdio.h>
# define Rs 70

int DollarToINR(int iNo)
{
    int iTotal=0;
    iTotal=iNo*Rs;
    return iTotal;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD:");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}