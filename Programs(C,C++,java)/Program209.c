#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   
#include<fcntl.h>
#define BUFFERSIZE 1024

int  DisplayN(char FName[], int iSize)
{
    int i=0;
    int iResult=0;
    int fd=0;
    char Arr[BUFFERSIZE]={'\0'};

    fd = open(FName, O_RDONLY);

    if(fd==-1)
    {
        printf("Umable to open");
    }
    else
    {
        iResult=read(fd,Arr,iSize);

        printf("%s",Arr);
        close(fd);
    }
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter the file name:\n");
    scanf("%s",FileName);

    printf("Enter the number of characters:\n");
    scanf(" %d",&iValue);

    DisplayN(FileName,iValue);

    return 0;
}