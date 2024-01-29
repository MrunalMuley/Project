#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   
#include<fcntl.h>
#define BUFFERSIZE 1024

int CountSmall(char FName[])
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
                if(Arr[i]>='a' && Arr[i]<='z')
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

    printf("Enter the file name:\n");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);
    printf("Number of small letters are: %d",iRet);

    return 0;
}