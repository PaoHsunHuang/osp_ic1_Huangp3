#include <stdio.h>
#include <fcntl.h>
int main (int argc, char *argv[]){
int OpenFile = open("/tmp/huangp3.txt",O_RDONLY);
printf("Hello, World! \n");


return(0);
}

