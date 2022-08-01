#include<unistd.h>

void main()
{
    char buff[20];
    read(1, buff, 20);
    write(0, buff, 20);
}