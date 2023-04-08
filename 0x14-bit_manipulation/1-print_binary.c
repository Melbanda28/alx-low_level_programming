#include "main.h"
#include <stdio.h>


void print_binary(unsigned long int n) 
{
    int i;

    for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--) 
    {
        if ((n >> i) & 1)
            putchar('1');
        else
            putchar('0');
    }
}

