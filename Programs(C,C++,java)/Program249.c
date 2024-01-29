#include<stdio.h>

void Display()
{
    static int iCnt=1;
    static char ch='A';

    if(iCnt<=6)
    {
        printf("%c\t",ch);     
        ch++;
        iCnt++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}