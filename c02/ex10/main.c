#include <stdio.h>
#include <string.h>
#include "ft_strlcpy.c"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	main()
{
	char	dest[20];
	char	dest2[20];
	char	src[10] = "thank you!";
	unsigned int	i = ft_strlcpy(dest, &src[0], 5);
	long unsigned int	j = strlcpy(dest2, &src[0], 5);

	printf("%u %s\n", i, dest);
	printf("%lu %s\n", j, dest2);
}
