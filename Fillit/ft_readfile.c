/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-monc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 15:39:15 by fde-monc          #+#    #+#             */
/*   Updated: 2015/12/18 17:20:05 by fde-monc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

// if blocks = 4
// + les pieces doivent se toucher 6 ou 8 fois (en tout)

typedef struct { 
	char	tetrim[4][5];
}			t_trim; 

t_trim	*ft_maketab(char *buf)
{
	t_trim	*tetrimino;
	int 	col;
	int 	line;
	int 	i;
	int		linecp;

	col = 0;
	line = 0;
	i = 0;
	tetrimino = (t_trim *)malloc(sizeof(t_trim));
	printf("BUF = %s\n", buf);
	while (i < 20)
	{
		col = 0;
		while (buf[i] == '#' || buf[i] == '.')
		{
		//	printf("INTO THE WHILE 2\n");
			tetrimino->tetrim[line][col] = buf[i];
			printf("%c copied in tet[%d][%d]!\n", buf[i], line, col);
			col++;
			i++;
		}
		if (buf[i] == '\n' && i < 20)
		{
			buf[i] = '\0';
			if (i < 20)
			{
				line++;
				printf("insterted NL\n");
				i++;
			}
			printf ("OUT OF IF, i = %d\n", i);
		}
		//printf("OUT OF WHILE 1\n");
	}
//	---------------->	printf code	<-------------------
	linecp = 0;
	while (linecp < 5)
	{
		printf("%s\n", tetrimino->tetrim[linecp]);
		linecp++;
	}
	return (tetrimino);
}
//	================>	end of code	<==================

//int	ft_isvalid(char *buf)
//{
//}

int	main(int ac, char **av)
{	
	int		fd;
	int		ret;
	char	buf[21];

	if (ac < 2)
	{
		ft_putendl("NO FILE FOUND");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	ret = read(fd, buf, 21);
	buf[20] = '\0';
	if (ret > 20)
		ft_maketab(buf);
	return (0);
}
