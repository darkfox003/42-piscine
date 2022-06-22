#include <stdio.h>
#include "ft_div_mod.c"

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int 	a = 7;
	int	b = 2;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("a : %d , b : %d , div : %d , mod : %d\n", a, b, div, mod);
	return (0);
}
