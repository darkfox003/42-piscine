#include <stdio.h>
#include "ft_str_is_lowercase.c"

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%d\n%d\n%d", ft_str_is_lowercase("afhuto"), ft_str_is_lowercase("fThuo"), ft_str_is_lowercase(""));
	return (0);
}
