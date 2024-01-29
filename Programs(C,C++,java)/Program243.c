#include<stdio.h>

int Small(char *str)
{
    static int iCnt=0;

    if(*str != 0)
    {
        if(*str>='a' && *str<='z')
        {
            iCnt++;
        }
        str++;
        Small(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[30];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    iRet = Small(arr);
    printf("%d",iRet);

    return 0;
}