#include <stdio.h>
#include "ft_sort_int_tab.c"

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	size = 5;
	int	tab[5] = {7, 3, 2, 9, 5};
	int	i;

	printf("before - ");
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(&tab[0], size);
	printf("after - ");
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
}
