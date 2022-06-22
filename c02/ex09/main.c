#include <stdio.h>
#include "ft_strcapitalize.c"

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	txt[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(txt));
	return (0);
}
