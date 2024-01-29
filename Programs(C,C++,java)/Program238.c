#include<stdio.h>

int Strlen(char *str)
{
    static int iCnt=0;

    if(*str != 0)
    {
        if(iCnt<*str)
        {
            iCnt++;
        }
        *str++;
        Strlen(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[30];

    printf("Enter string:");
    scanf("%s",arr);

    iRet = Strlen(arr);
    printf("%d",iRet);

    return 0;
}