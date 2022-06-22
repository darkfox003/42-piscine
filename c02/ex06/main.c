#include <stdio.h>
#include "ft_str_is_printable.c"

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("%d\n%d\n%d", ft_str_is_printable("asda!?AS"), ft_str_is_printable("asda\tasda"), ft_str_is_printable(""));
}
