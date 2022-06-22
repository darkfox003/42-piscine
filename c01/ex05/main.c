#include <stdio.h>
#include "ft_putstr.c"

void	ft_putstr(char *str);

int	main(void)
{
	char	str[10] = {'4', '2', 'B', 'a', 'n', 'g', 'k', 'o', 'k'};

	ft_putstr(&str[0]);
}
