#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   
#include<fcntl.h>
#include<string.h>

int main()
{
    char Filename[30];
    char Arr[100]={'\0'};
    int fd=0;
    int iRet=0;

    printf("Enter the file name that you want to open and write:\n");
    scanf("%s",Filename);

    fd=open(Filename,O_RDWR | O_APPEND);

    if(fd==-1)
    {
        printf("Umable to open");
    }
    else
    {
        printf("%s File is opened successfully with file desciptor %d\n",Filename,fd);

        printf("Enter the data in file:\n");
        scanf(" %[^'\n']s",Arr);

        iRet=write(fd,Arr,strlen(Arr));

        printf("%d bytes gets successfully written into file",iRet);
        close(fd);
    }
    return 0;
}