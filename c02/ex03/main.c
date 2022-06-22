#include <stdio.h>
#include "ft_str_is_numeric.c"

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d\n%d\n%d", ft_str_is_numeric("024563"), ft_str_is_numeric("05A54s"), ft_str_is_numeric(""));
	return (0);
}
