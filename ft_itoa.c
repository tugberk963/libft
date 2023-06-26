
char *ft_itoa(int n)
{
    size_t x;
    int nb;
    char *str;

    x = 0;
    nb = n;

    while (nb > 10)
    {
        nb /= 10;
        i++;
    }

    str = (char *)malloc(sizeof(char) * i);

    if (!str)
        return NULL;

    while (i > 0)
    {
        nb /= (10 * i)

    }

}