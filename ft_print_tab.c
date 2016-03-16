#include "libft.h"

void ft_print_tab(char **tab) //go to lib
{
	int i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (tab[i][0] != '\0')
			ft_putendl(tab[i]);
		i++;
	}
}