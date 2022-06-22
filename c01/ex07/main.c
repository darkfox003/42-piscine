#include <stdio.h>
#include "ft_rev_int_tab.c"

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	size = 5;
	int	tab[size];
	int	i = 0;

	while (i < size)
	{
		tab[i] = i+1;
		i++;
	}
	printf("before - ");
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(&tab[0], size);
	printf("after - ");
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
