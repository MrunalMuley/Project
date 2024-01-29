//Accept one character from user and convert case of that character.

#include<stdio.h>

void DisplayConvert ( char CValue)
{
    //logical AND operator
    if(CValue >= 'a' && CValue <= 'z')
    {
        CValue=CValue-32;
        printf(" %c", CValue );
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        CValue=CValue+32;
        printf(" %c", CValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character:\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue );

    return 0;
}