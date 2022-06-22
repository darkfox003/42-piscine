#include <stdio.h>
#include "ft_fibonacci.c"

int	ft_fibonacci(int index);

int	main()
{
	printf("%d %d", ft_fibonacci(10), ft_fibonacci(-3));
}
