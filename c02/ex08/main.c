#include <stdio.h>
#include "ft_strlowcase.c"

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	txt[10] = "SaSJ oOoUI";
	char	*test = &txt[0];

	printf("%s\n", ft_strlowcase(test));
	return (0);
}
