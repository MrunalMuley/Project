//Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dAns=0.0;
    dAns=((double)fTemp-32)*(5.0/9.0);
    return dAns;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temprature in Cecius is %lf",dRet);

    return 0;
}