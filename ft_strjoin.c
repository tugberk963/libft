#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    char *new;

    i = 0;
    j = 0;
    new = (char *)malloc(((sizeof(s1) + sizeof(s2)) * sizeof(char)) + 1);
    if (!(new))
        return NULL;

    while (s1[i])
        new[j++] = s1[i++];

    i = 0;
    while(s2[i])
        new[j++] = s2[i++];

    new[j] = '\0';

    return new;
}