#include "libft.h"

int	main(int argc, char **argv)
{
	argc = 1;
	char *res = argv[1];

	printf("res = %s\n real res = %s", ft_strdup(res), strdup(res));
}
