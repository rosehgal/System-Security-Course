#include <string.h>
#include <stdio.h>

/*
    compile with the following options:
    gcc -m32 -z execstack -fno-stack-protector -o change_function change_function.c
    ./change_function `python -c 'import struct;address=struct.pack("<I",ADDRESS_OF_MY_FUNCTION);print "A"*32+address'`
*/
  

void print(char *argv)
{
    char buffer[100];
    printf("buffer is at %x", &buffer);
    strcpy(buffer,argv);
}

int main(char argc,char** argv)
{
    print(argv[1]);
    return 0;
}
