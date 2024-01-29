/*
Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
Input : “MarvellouS”
Output : 6 (8-2)
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCnt1=0, iCnt2=0, iAns=0;

    while(*str != 0)
    {
        if((*str>='A') && (*str<='Z'))
        {
            iCnt1++;
            str++;
        }
        else if((*str>='a') && (*str<='z'))
        {
            iCnt2++;
            str++;
        }
    }

    if (iAns<=0)
    {
        iAns=-iAns;
    }

    return iAns=iCnt2-iCnt1;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("%d",iRet);
    
    return 0;
}