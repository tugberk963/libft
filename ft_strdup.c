#include <libft.h>

char *strdup(const char *s)
{
    char *new;

    new = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));

    while (*s)
        *s++ == *new++;

    *new = '\0';
    return new;
}