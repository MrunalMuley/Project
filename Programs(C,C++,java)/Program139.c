//.Write a program which accept string from user and accept one character. Return index of last occurrence of that character.

#include<stdio.h>

int LastChar(char *str,char ch)
{  
    int iCnt=0, iLast=-1;

    while(*str != '\0')
    {
        if(*str==ch)
        {
            iLast=iCnt;          
        }
        iCnt++;
        str++;
    }
    return iLast;       //iLast=-1 updated as iCnt 
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

    iRet = LastChar(arr, cValue);
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