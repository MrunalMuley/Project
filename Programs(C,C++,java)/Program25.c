//Write a program which accept total marks & obtained marks from user and calculate percentage. 

#include<stdio.h>
float Percentage(float fTotal,float fMarks)
{
    float fAns=0.0f;
    fAns=(fMarks/fTotal)*100;
    return fAns;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks: ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage are: %f",fRet);

    return 0;
}