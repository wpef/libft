#include "libft.h"

void	ft_cdebug(char *str, char b)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i]);
		if (str[i] == '%')
			ft_putchar(b);
		i++;
	}
	ft_putchar('\n');
}
