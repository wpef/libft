#include "libft.h"

int	main()
{
	char src[] = "salutation";
	char dst[50];
	void *s = (void *)src;
	void *d = (void *)dst;
	
	memccpy(d, s, 'u', 3);
	printf("%s",d);
}
