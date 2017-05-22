#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *a = malloc(512);
    char *b = malloc(256);
    char *c;

    strcpy(a,"Memory for A");
    printf("First Allocation %p points to %s\n", a,a);

    free(a);

    c = malloc(400);
    strcpy(c,"I have memory allocated for C now\n");

    printf("Second Allocation %p holds the data for %s\n", c, c);
    printf("Third Allocation %p holds the data %s\n", a, a);

    return 0;
}
