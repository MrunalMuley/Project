// Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A,B,C,D. Exam
//of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive)

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
    case 'a':
    case'A':
    printf("Exam is at 7 AM");
    break;
    case 'b':
    case 'B':
    printf("Exam is at 8:30 AM");
    break;
    case 'c':
    case 'C':
    printf("Exam is at 9:20 AM");
    break;
    case 'd':
    case 'D':
    printf("Exam is at 10:30 AM");
    break;
    default:
    printf("Invalid Division");
    break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your devision:");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}