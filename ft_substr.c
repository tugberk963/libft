#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *new;

    i = 0;
    j = 0;
    new = (char *)malloc(sizeof(char) * (len - start));
    if (!(new))
        return NULL;

    while (s[i])
    {
        if (i >= start && j < len)
            new[j++] = s[i++];
        else
            i++;
    }

    new[j] = '\0';

    return (new);
}