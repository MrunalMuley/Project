//Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)

#include<stdio.h>
# define SqMtr 0.0929

double SquareMeter(int iValue)
{
    double dAns=0.0;
    dAns=(double)iValue*SqMtr;
    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:");
    scanf("%d",&iValue);
    
    dRet = SquareMeter(iValue);

    printf("Area in Square meter is %lf",dRet);

    return 0;
}