//Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

#include<stdio.h>

void Display(char ch)
{
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        printf("Decimal:%d\t Hexadecimal:%x\t Octal:%o\t",ch,ch,ch,ch);
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