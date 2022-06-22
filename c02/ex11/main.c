#include <stdio.h>
#include "ft_putstr_non_printable.c"

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	txt[100] = "Coucou\ntu vas bien ?";
	
	ft_putstr_non_printable(&txt[0]);
}
