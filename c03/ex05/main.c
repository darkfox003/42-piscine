#include <stdio.h>
#include <string.h>
#include "ft_strlcat.c"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb);

int	main()
{
	char	dest[20] = "testing";
	char	dest2[20] = "testing";
	char	src[10] = "tester";
	unsigned int	myfunc = ft_strlcat(dest, src, 18);
	long unsigned int	rfunc = strlcat(dest2, src, 18);

	printf("%u %s\n", myfunc, dest);	
	printf("%lu %s\n", rfunc, dest2);
}
