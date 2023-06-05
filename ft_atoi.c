#include <libft.h>

int ft_atoi(char *c)
{
    int result;
    int i; 
    result = 0;
    i = 0;

    while (c[i] != '\0')
    {
        if ('0' <= c[i] && c[i] <= '9')
        {
            result += (c[i] - '0');
            result *= 10;
        }
        i++;
    }

    return result / 10; 
}