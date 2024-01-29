//Write a program which accept string from user reverse that string in place.

#include <stdio.h>
#include <string.h>

void StrRevX(char *str)
{
    char iCnt='\0';
    int iLength=strlen(str);

    if(*str != 0)
    {
        for(iCnt=(iLength-1);iCnt>=0;iCnt--)
        {
           printf("%c",str[iCnt]);
        }
    }
}

int main()
{
    char arr[20];

    printf("Enter the string:");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    return 0;
}