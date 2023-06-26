#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
    char *src;

    *src = *s;

    while (*src && n != 0 )
    {
        if (*src == c)
            return (*s);
        n--;
    }
    
    return (NULL);
}