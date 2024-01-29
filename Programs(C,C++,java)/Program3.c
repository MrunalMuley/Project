#include<stdio.h>

void Display()
{
    auto int i = 0;
    i=5;
    for( ; i>=1; i--)
    {
        printf(" %d ",i);
        //i++;
    }
}

int main()
{
    Display();

    return 0;
} 