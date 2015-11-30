#include "libft.h"

	int	main (int argc, char **argv)
	{
		char	*c = argv[1];
		int	b = 73;
		char	*res = ft_memchr(c, b, 4);

		argc = 0;
		printf("res = %s\n", res);
	}
