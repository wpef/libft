int	main (int argc, char **argv)
{
	char *c = argv[1];
	char *b = argv[2];
	char *res = ft_strcmp(c, b);
	char *rres = strcmp(c, b);

	argc = 0;
	printf("res = %s\n", res);
	printf("vrai res = %s", rres);
}