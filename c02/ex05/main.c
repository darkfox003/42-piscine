#include <stdio.h>
#include "ft_str_is_uppercase.c"

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%d\n%d\n%d", ft_str_is_uppercase("ABGHS"), ft_str_is_uppercase("jUIce"), ft_str_is_uppercase(""));
	return (0);
}
