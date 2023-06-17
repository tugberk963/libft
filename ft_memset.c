#include <libft.h>

void *ft_memset(void *s, int c, size_t n)
{
    register unsigned char *ptr; 
    ptr = (unsigned char*) s;

    while (n-- > 0)
        *(ptr++) = c;

    return (s);
}