#include <libft.h>

int main(void)
{
    char test[7] = "tugberk";
    char testt[7] = "serce";
    memccpy(testt, test, 'u', 3);
    printf("%s", testt);

}