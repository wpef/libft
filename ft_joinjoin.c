char	*ft_joinjoin(char *s1, char *s2, char *s3)
{
	char *tmp;
	char *tmp2;

	tmp = ft_strjoin(s1, s2);
	tmp2 = ft_strjoin(tmp, s3);
	free (tmp);
	return (tmp2);
}