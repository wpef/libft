int main (int argc, char **argv)
{
	char r;
	if (argc >= 1)
	{
		r = ft_toupper(argv[1][0]);
		printf("%c\n", r);
	}
	return(0);
}