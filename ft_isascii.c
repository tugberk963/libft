#include <libft.h>

int ft_isascii(int c)
{
    if (!(0 <= c && c <= 127))
        return (0);
    return (1);
}