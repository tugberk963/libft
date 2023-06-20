#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    const char* s;
    char* d;
    s = src;
    d = dest;

    while (n-- && *s != c)
        *d++ = *s++;
    
    return dest;
}
