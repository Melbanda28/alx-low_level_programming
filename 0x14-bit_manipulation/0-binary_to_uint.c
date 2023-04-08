#include "main.h"
#include <stddef.h>

/**
 * converts a binary number to an unsigned int.
 * where b is pointing to a string of 0 and 1 chars
 * Return:  the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int n = 0;
    int i;

    if (b == NULL)
        return 0;

    for (i = 0; b[i] != '\0'; i++) {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        n <<= 1;
        if (b[i] == '1')
            n += 1;
    }

    return n;
}
