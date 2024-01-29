//Write a program which accept string from user and accept one character. Check whether that character is present in string or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str,char ch)
{  
    while(*str != '\0')
    {
    if(*str==ch)
    {
        return true;
    }
    str++;
    return false;
    }
    
}

int main()
{
    char arr[20];
    char cValue='\0';
    bool bRet = false;

    printf("Enter the string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character:");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);
    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}