#include <stdio.h>
#include "ft_recursive_power.c"

int 	ft_recursive_power(int nb, int power);

int	main()
{
	printf("%d %d", ft_recursive_power(2, 3), ft_recursive_power(-2, -1));
}
