#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Arr[] = "Marvellous Infosystems";
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);

    Ret = write(fd,Arr,strlen(Arr)); // (Kashat Lihayecha, Kay Lihayecha, Kiti Lihayecha)
    
    printf("%d bytes gets written in the file\n",Ret);

    close(fd);
    return 0;
}