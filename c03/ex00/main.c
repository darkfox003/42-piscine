#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%d\n%d\n", ft_strcmp("Tester", "Tester"), strcmp("Tester", "Tester"));
	printf("%d\n%d\n", ft_strcmp("Tester", "Testing"), strcmp("Tester", "Testing"));
}
