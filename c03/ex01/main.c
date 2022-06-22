#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "Testings";
	char	s2[] = "Testing";
	//char	s3[] = "Tester";

	printf("%d\n%d\n", ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
	printf("%d\n%d\n", ft_strncmp("\200", "\0", 1), strncmp("\200", "\0", 1));
}
