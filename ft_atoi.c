#include <libft.h>

int ft_atoi(char *c)
{
    static unsigned short int i;
    static unsigned short int sign;
    int result;

    sign = 1;
    result = 0;



    while (c[i] != '\0')
    {
        if (c[i] == '-' || c[i] == '+')
        {   
            if (c[i] == '-')
                sign *= -1;
        }

        if ('0' <= c[i] && c[i] <= '9')
        {
            result += (c[i] + '0')  * 10;
        }
        i++;
    }

    return result * sign; 
}