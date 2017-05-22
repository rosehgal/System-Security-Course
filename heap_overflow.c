#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>



struct security {
    int priority;
    char *name;
};

void summerschool()
{
    printf("This is Wh@t you called HE4P 0verfl0w.!!!");
}

int main(int argc, char **argv)
{
    struct security *i1, *i2;
    
    i1 = malloc(sizeof(struct security));
    i1->priority = 1;
    i1->name = malloc(8);

    i2 = malloc(sizeof(struct security));
    i2->priority = 2;
    i2->name = malloc(8);

    strcpy(i1->name, argv[1]);
    strcpy(i2->name, argv[2]);

    printf("and that's a wrap folks!\n");
}
