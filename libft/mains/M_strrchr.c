#include "libft.h"

	int	main (int argc, char **argv)
	{
		char	*c = argv[1];
		int	b = 73;
		char	*res = ft_strrchr(c, b);
		char	*rres = strrchr(c, b);

		argc = 0;
		printf("res = %s\n", res);
		printf("vrai res = %s", rres);
	}
