int	main(int argc, char **argv)
{
	char *s1 = argv[1]; 
	char *s2 = argv[2]; //check
	int result;

	if (argc == 3)
	{
		result = ft_strnequ(s1, s2, 4);
		printf("%d\n", result);
	}
	else
		printf("argc error");
}