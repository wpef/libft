#include "libft.h"

int	main (int argc, char **argv)
{
	char *c = argv[1];
	char *b = argv[2];
	size_t n = 3;
	int res = ft_strncmp(c, b, n);
	int rres = strncmp(c, b, n);

	argc = 0;
	printf("res = %d\n", res);
	printf("vrai res = %d", rres);
}