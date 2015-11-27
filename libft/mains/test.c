#include "libft.h"

int	main (void) //strcpy
{
	//works \ src < dest
	char dest[] = "CACACA";
	char src[] = "VALD";
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}