#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[20] = "testing";
	char	dest2[20] = "testing";
	char	src[5] = "tin";

	ft_strcat(&dest[0], &src[0]);
	printf("%s\n", dest);
	strcat(&dest2[0], &src[0]);
	printf("%s\n", dest2);
}
