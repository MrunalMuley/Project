#include<stdio.h>

int Display( int iNo, int iFrequency)
{
    auto int i;
    for(i=1;iFrequency>=i; i++)
    {
        printf(" %d ",iNo);
    }
}

int main()
{
    auto int iValue = 0;
    auto int iCount = 0;

    printf("Enter number:\n");
    scanf("%d" ,&iValue);

    printf("Enter frequency:\n");
    scanf("%d" ,&iCount);

    Display(iValue, iCount);

    return 0;
} 