#include <stdio.h>
#include "ft_ultimate_div_mod.c"

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a = 7;
	int	b = 2;

	printf("before - a : %d , b : %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("after - a : %d , b : %d\n", a, b);
	return (0);
}
