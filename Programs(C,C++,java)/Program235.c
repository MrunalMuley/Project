#include<stdio.h>

void Display(int iNo)
{
    static int iCnt=1;
    static char ch='a';

    if(iCnt<=iNo)
    {
        printf("%c\t",ch);     
        ch++;
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