#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *a = malloc(512);
    char *b = malloc(256);
    
    printf("I ask you for A only enter your data");

    scanf("%s",a);

    printf("a has content %s\n", a);

    printf("But b is empty as you can see %s\n", b );

    return 0;
}
