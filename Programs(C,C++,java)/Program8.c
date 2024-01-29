#include <stdio.h>

int Display ( int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter number:\n");
    scanf("%d" ,&iValue);

    Display(iValue);
    
    return 0;
} 
