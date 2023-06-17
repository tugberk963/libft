#include <libft.h>

char *ft_strnstr(const char *haystack, const char * needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    if (!(needle[j]))
        return ((char*)haystack);

    while (haystack[i] && len != 0)
    {
        j = 0;
        while (haystack[i] == needle[j])
        {
            j++;
            if (!(needle[j]))
                return ((char *)&haystack[i-j+1]);
            i++;
        }
        i++;
        len--;
    }

    return (0);
}