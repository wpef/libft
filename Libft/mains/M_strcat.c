#include "libft.h"

int     main(int argc, char **argv)
{
    char s1[50] = "bonjour ";
    const char *s2;
  	argc = 2;

    s2 = argv[1];
     printf("%s", ft_strcat(s1, s2));
    return (0);
}