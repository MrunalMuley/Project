#include<stdio.h>

void Display(int iNo)
{
    static int iCnt=0;

    if(iCnt<iNo)
    {
        printf("*\t",iCnt);     
        iCnt++;
        Display(iNo);
    }
}

int main()
{
    int iValue1=0;

    printf("Enter the number:");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;
}