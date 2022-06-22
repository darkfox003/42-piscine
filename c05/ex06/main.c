#include <stdio.h>
#include "ft_is_prime.c"

int	ft_is_prime(int nb);

int	main()
{
	printf("%d %d", ft_is_prime(1), ft_is_prime(2147483647));
}
