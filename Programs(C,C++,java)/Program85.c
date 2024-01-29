//Accept number from user and display below pattern.
//Input : 8
//Output : 2 4 6 8 10 12 14 16

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    int iAns=1;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iAns=iCnt*2;
        printf(" %d \t ",iAns);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}