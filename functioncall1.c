#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>

void main()
{
    int n;
    char abc[30];
    n = read(0, abc,30);  // INPUT
    write(1,abc,n);  // OUTPUT
    printf("total Length is: %d\n", n);
}