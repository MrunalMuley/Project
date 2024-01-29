#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   
#include<fcntl.h>

int main()
{
    char Filename[30];
    int fd=0;

    printf("Enter the file name that you want to create:\n");
    scanf("%s",Filename);

    fd=creat(Filename,0777);

    if(fd==-1)
    {
        printf("Umable to create file\n");
    }
    else
    {
        printf("%s File is cretaed successfully with file desciptor %d\n",Filename,fd);

        close(fd);
    }
    return 0;
}