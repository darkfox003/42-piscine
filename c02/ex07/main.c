#include <stdio.h>
#include "ft_strupcase.c"

char	*ft_strupcase(char *str);

int	main(void)
{
	char	test[10] = "Asgy guiOH";
	char	*txt = &test[0];

	printf("%s\n", ft_strupcase(txt));
	return (0);
}
