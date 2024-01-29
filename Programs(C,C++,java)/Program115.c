//Accept number of rows and number of columns from user and display below pattern.
/*
Input : iRow = 4 iCol = 4
Output :1 2 3 4 5
        1 2     5
        1   3   5
        1     4 5
        1 2 3 4 5
*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
    int i=0, j=0, iAns=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if (i==iRow || j==iCol || i==1 || j==1 || i==j)
            {
                printf(" %d \t",j);
            }
            else
            {
                printf("  \t");
            }
        }
    printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}