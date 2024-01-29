#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   
#include<fcntl.h>
#define BUFFERSIZE 1024

int  CountChar(char FName[], char Ch)
{
    int i=0,iCnt=0;
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
        while((iResult=(read(fd,Arr,sizeof(Arr)))) != 0)
        {
            for(i=0;i<iResult;i++)
            {
                if(Arr[i]==Ch)
                {
                    iCnt++;
                }
            }
        }
        close(fd);
        return iCnt;
    }
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue='\0';

    printf("Enter file name:\n");
    scanf("%s",FileName);

    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);
    printf("Frequency of given character is: %d",iRet);

    return 0;
}