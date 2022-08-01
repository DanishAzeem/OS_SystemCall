#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>

void main()
{
    int fd1, fd2, n;
    char buff[30];
    fd1 = open("f1.txt", O_RDONLY);
    fd2 = open("f2.txt", O_WRONLY | O_APPEND);
    n = read(fd1, buff, 30);
    write(fd2, buff, n);
}