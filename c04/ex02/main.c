#include "ft_putnbr.c"
#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-425);
	write(1, "\n", 1);
	ft_putnbr(100043);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
}
