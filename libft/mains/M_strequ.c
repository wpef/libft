int	main(int argc, char **argv)
{
	char *s1 = argv[1]; 
	char *s2 = argv[2]; //check
	int result;

	if (argc == 3)
	{
		result = ft_strequ(s1, s2);
		printf("%d\n", result);
	}
	else
		printf("argc error");
}