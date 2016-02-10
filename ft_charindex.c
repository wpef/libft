#include "libft.h"

int	ft_charindex(char *s, char c)
{
	int i;

	i = 0;
	if (s && s[i])
	{
		while ((s[i] != '\0') && (s[i] != c))
			i++;
		if (s[i] == c)
			return (i);
	}
	return(-1);
}
