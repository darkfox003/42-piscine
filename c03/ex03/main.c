#include <stdio.h>
#include <string.h>
#include "ft_strncat.c"

char	*ft_strncat(char *dset, char *src, unsigned int nb);

int	main(void)
{
	char	dest[20] = "testing";
	char	dest2[20] = "testing";
	char	src[10] = "tester";

	ft_strncat(dest, src, 4);
	strncat(dest2, src, 4);
	printf("%s\n%s", dest, dest2);
}
