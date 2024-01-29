/*
Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 5 iCol = 5
Output : a b c d e
1 2 3 4 5
a b c d e
1 2 3 4 5
a b c d e
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i=0, j=0;
    char ch='a';

  for(i=1;i<=iRow;i++)
    {
        ch='a';  
        for(j=1;j<=iColumn;j++)
        {
            if(i%2!=0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%d\t",j);
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