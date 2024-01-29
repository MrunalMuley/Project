//Write a program which accept name from user and print that name

# include <stdio.h>

int main()
{
    char Name[50];
    printf("Please enter full name:");
    // The inverted search set [^\n] can be used to read the characters 
    //till the new line character is encountered
    scanf("%[^\n]",Name); 
    printf("Your name is %s",Name);

    return 0;
}