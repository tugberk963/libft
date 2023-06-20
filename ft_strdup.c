#include <libft.h>

char *strdup(const char *s)
{
    char* new;

    new = (char *)malloc(ft_strlen(s) * sizeof(char));

    return new;
}