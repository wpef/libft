#include "libft.h"

void	ft_idebug(char *str, int nb)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i]);
		if (str[i] == '%')
			ft_putnbr(nb);
		i++;
	}
	ft_putchar('\n');
}
