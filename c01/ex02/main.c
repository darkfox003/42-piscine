#include <stdio.h>
#include "ft_swap.c"

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a = 100;
	int	b = 50;

	printf("before - a : %d , b : %d\n", a, b);
	ft_swap(&a, &b);
	printf("after - a : %d , b : %d\n", a, b);
}
