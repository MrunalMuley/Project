#include<stdio.h>

void Display(int iNo)
{
    while( iNo > 0 )        //any number +ve integer
    {
        printf(" * ");
        iNo --;
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