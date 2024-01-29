//Accept Character from user and check whether it is small case or not (a-z).
/*
Input : g
Output : TRUE
Input : D
Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return true;
    }
    else if(ch>='A' && ch<='Z')
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);
    if(bRet == true)
    {
        printf("It is small case character");
    }
    else
    {
        printf("It is not a small case character");
    }

    return 0;
}