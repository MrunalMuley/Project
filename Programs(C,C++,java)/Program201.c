#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   
#include<fcntl.h>

int main()
{
    char Filename[30];
    char Arr[100]={'\0'};
    int fd=0;
    int iRet=0;

    printf("Enter the file name that you want to open and read:\n");
    scanf("%s",Filename);

    fd=open(Filename,O_RDONLY);

    if(fd==-1)
    {
        printf("Umable to open");
    }
    else
    {
        printf("%s File is opened successfully with file desciptor %d\n",Filename,fd);

        iRet=read(fd,Arr,16);

        printf("Data from file is:%s\n",Arr);
        close(fd);
    }
    return 0;
}