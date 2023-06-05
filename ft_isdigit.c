#include <libft.h>

int ft_isdigit(int c)
{
    if (!('0' <= c && c <= '9'))
        return (0);
    return (1);
}
