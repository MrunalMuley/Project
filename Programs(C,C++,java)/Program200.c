#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   
#include<fcntl.h>

int main()
{
    char Filename[30];
    int fd=0;

    printf("Enter the file name that you want to open and read:\n");
    scanf("%s",Filename);

    fd=open(Filename,O_RDONLY);

    if(fd==-1)
    {
        printf("Umable to open");
    }
    else
    {
        printf("%s File is opened successfully with file desciptor %d",Filename,fd);
        close(fd);
    }
    return 0;
}