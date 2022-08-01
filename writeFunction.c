#include<unistd.h>
int main()
{
    write(1,"hello world\n",16); //1 is the file descriptor, "hello\n" is the data, 6 is the count of characters in data
}
