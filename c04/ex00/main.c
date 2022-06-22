#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

int	ft_strlen(char *str);

int	main(void)
{
	char	test[10] = "Testing";
	printf("%d\n", ft_strlen(test));
}
