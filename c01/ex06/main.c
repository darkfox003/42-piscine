#include <stdio.h>
#include "ft_strlen.c"

int	ft_strlen(char *str);

int	main(void)
{
	char	str[10] = {'t', 'e', 's', 't'};

	printf("%d\n", ft_strlen(&str[0]));
	return (0);
}
