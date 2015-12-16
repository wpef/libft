#include "libft.h"

int     main(int argc, char **argv)
{
    char s1[50] = "bonjour ";
    char s11[50] = "bonjour ";
    const char *s2;
  	argc = 2;

    s2 = argv[1];
     printf("res = %s\n real res = %s", ft_strncat(s1, s2, 3), strncat(s11, s2, 3));
    return (0);
}