#include <stdio.h>
#include "ft_atoi.c"

int	ft_atoi(char *str);

int	main(void)
{
	char	test[100] = "   ---+--+1234ab567";
	
	printf("%d", ft_atoi(test));
}
