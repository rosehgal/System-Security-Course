#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include <stdio.h>
#include <dlfcn.h>

static int (*orig_printf)(const char *format, ...) = NULL;

int printf(const char *format, ...)
{
    orig_printf = (int (*)(const char *format, ...))dlsym(RTLD_NEXT, "printf");

    return (*orig_printf)("This is done using LD_PRELOAD\n");
}
