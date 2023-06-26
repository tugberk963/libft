#include <libft.h>

int main(void)
{
    char *new = ft_strjoin("Tugberk", "Serce");

    printf("%s", new);
    printf("%ld", ft_strlcpy("Tugberk", "Serce", 1));
    free(new);
}