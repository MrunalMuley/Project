//Write a program which accept one number from user and print that number of even numbers on screen. 

#include <stdio.h>

void PrintEven(int iNo)
{
    if(iNo <=0)        //updator
    {
        iNo=-iNo;
    }
    
    int iCnt=0;
    int iEven=0;

    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        iEven=iCnt*2;
        printf("%d\t",iEven);
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}