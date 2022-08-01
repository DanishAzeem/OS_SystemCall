#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>


void main(){
    int count;
    count = write(1, "Hello World!\n", 50);
    printf("Total Number of bytes %d\n", count);
    
}