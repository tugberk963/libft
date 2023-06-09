#include <libft.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len;
    size_t i;

    i = 0;
    dest_len = ft_strlen(dest);

    while (src[i] != '\0' && (i < size - dest_len - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';
    return i;
}