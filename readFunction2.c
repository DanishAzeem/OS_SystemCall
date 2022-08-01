#include<unistd.h>
#include<stdio.h>

void main()
{
    int nread;
    char buff[20];
    nread = read(1, buff, 20);
    write(0, buff, nread);
    printf("nread take space = %d\n", nread);
}
