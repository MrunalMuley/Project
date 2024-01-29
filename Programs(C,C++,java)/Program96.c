/*
Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 4
Output : 1 2 3 4
5 6 7 8
9 1 2 3
4 5 6 7
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i=0, j=0, k=1, l=1;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i>=3)
            {
                printf("%d\t",k);
                k++;
            }
            else
            {
                printf("%d\t",l);
                l++;
            }
        }
        printf("\n\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}