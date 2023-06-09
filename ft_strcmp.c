#include <libft.h>

int ft_strcmp(const char *s1, const char *s2)
{
    size_t i;
    int diff;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;

    diff = s1[i] - s2[i];

    if (diff > 0)
        return (1);
    else if (diff < 0)
        return (-1);
    else
        return (0);
}