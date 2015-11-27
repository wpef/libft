/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-monc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:22:27 by fde-monc          #+#    #+#             */
/*   Updated: 2015/11/26 19:00:06 by fde-monc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>

/*
** official
*/

size_t	ft_strlen(const char *s);
char	*ft_strnew(size_t size);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);

char	ft_toupper(char c);
char	ft_tolower(char c);

/*
** custom
*/

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *c);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);

#endif
