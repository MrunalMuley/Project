//Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small
//then print all the characters in reverse order till a. In other cases return directly.


#include<stdio.h>

void Display(char ch)
{
    char iCnt='\0';
    if(ch>='A' && ch<='Z')
    {
       for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c \t", iCnt);
        }
    }
    else if(ch>='a' && ch<='z')
    {
        for(iCnt=ch; iCnt <='z' && iCnt >='a'; iCnt--)
        {
            printf("%c \t",iCnt);
        }
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue='\0';

    printf("Enter the character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}