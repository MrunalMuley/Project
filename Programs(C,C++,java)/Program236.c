#include<stdio.h>

void Display(int iNo)
{
    int iCnt=iNo;

    if(iCnt>1)
    {
        printf("%d\t*\t",iCnt); 
        Display(iNo-1);  
    }
    else
    {
        printf("%d\t*\t",iNo);
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