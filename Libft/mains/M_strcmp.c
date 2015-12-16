#include "libft.h"

int	main (int argc, char **argv)
{
	char *c = argv[1];
	char *b = argv[2];
	int res = ft_strcmp(c, b);
	int rres = strcmp(c, b);

	argc = 0;
	printf("res = %d\n", res);
	printf("vrai res = %d", rres);
}