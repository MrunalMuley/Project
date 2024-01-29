/*
Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 4
Output : A B C D
A B C D
A B C D
A B C D
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i=0, j=0;
    char ch='A';

    for(i=1;i<=iRow;i++)
    {
        ch='A';      //resetting iRow to char
        for(j=1;j<=iColumn;j++)
        {
            printf("%c\t",ch);
            ch++;
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