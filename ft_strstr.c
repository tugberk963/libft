#include <libft.h>

char *ft_strstr(const char *haystack, const char *needle)
{
    int x;

    while (haystack[i] != '\0')
    {
        while (haystack[i] == needle[i])
        {
            if (x == ft_strlen(needle))
                return haystack;
            haystack++;
            x++;
        }
        i++;
    }

    return NULL;
}