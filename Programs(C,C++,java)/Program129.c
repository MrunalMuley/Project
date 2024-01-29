//Write a program which accept string from user and check whether it contains vowels in it or not.


#include<stdio.h>
#include<stdbool.h>

bool ChkVowels(char *str)
{
    int iCnt=0;
    while(*str != 0)
    {
        if((*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U') || (*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u'))
        {
            return true;
        }
        else
        {
            return false;
        }
    } 
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowels(arr);
    if(bRet==true)
    {
        printf("There are vowels");
    }
    else
    {
        printf("There are no vowels");
    }
    return 0;
}