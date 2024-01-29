//Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.

#include<stdio.h>
#include <stdbool.h>

typedef int  i;
#define TRUE 1
#define FALSE 0

int ChkVowel ( char CValue)
{
    //logical OR operator
    if(CValue=='a'||CValue=='e'||CValue=='i'||CValue=='o'||CValue=='u') 
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter character:\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue );
    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}