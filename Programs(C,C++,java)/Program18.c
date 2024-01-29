//Write a program which accept number from user and display all its non factors

# include <stdio.h>

int NonFact(int iNo)
{
    if (iNo<=0)
    {
        iNo=-iNo;
    }

    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo % iCnt)!=0)
        { 
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}