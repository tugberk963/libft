#include <libft.h>

int ft_atoi(const char *cptr)
{
    static int result;
    static int i; 
    static int sign;

    sign = 1;
    result = 0;
    i = 0;

    if (cptr[i] == '+' || cptr[i] == '-')
    {
        if (cptr[i] == '-')
            sign = -1;
        i++;
    }

    while ('0' <= cptr[i] && cptr[i] <= '9')
    {
        result *= 10;
        result += cptr[i] - '0';
        i++;    
    }

    return result * sign;
}