#include <libft.h>

char *ft_strncpy(char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while (src[i] != '\0' && i < size)
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] == '\0';

    return dest;
}