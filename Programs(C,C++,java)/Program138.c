//Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

#include<stdio.h>

int FirstChar(char *str,char ch)
{  
    int iCnt=0;

    while(*str != '\0')
    {
        if(*str==ch)
        {
            return iCnt++;          //character is present in given string
        }
        iCnt++;
        str++;
    }
    return -1;       //character not found
}

int main()
{
    char arr[20];
    char cValue='\0';
    int iRet = 0;

    printf("Enter the string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character:");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);
    if(iRet != -1)
    {
        printf("Character location is: %d",iRet);
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}