//Write a program which accept string from user and display it in reverse order

#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{
    char iCnt='\0';
    int Length=strlen(str);

    if(*str != 0)
    {
        for(iCnt=(Length-1);iCnt>=0;iCnt--)     //Length-1 as we do not want to return null'\0'
        {
            printf("%c",str[iCnt]);
        }
    }
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);
    
    return 0;
}