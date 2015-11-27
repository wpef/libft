int	main (void) //strNcpy
{
	//works \ src < dest
	char dest[] = "CACACA";
	char src[] = "VALD";
	ft_strncpy(dest, src, 11);
	printf("%s\n", dest);

	//works \ dest < src
	char dest1[] = "VALD";
	char src1[] = "CACACA";
	ft_strncpy(dest1, src1, 11);
	printf("%s\n", dest1);

	//works \ n < src
	char dest2[] = "CACACA";
	char src2[] = "VALD";
	ft_strncpy(dest2, src2, 3);
	printf("%s\n", dest2);

	// \ n < dest
	char dest3[] = "vald";
	char src3[] = "cacaca";
	ft_strncpy(dest3, src3, 3);
	printf("%s\n", dest3);

	char dest[] = "putaindemerde";
	char src[] = "tulsais";
	ft_strncpy(dest, src, 11);
	printf("%s\n", dest);
}