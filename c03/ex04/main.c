#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	printf("%s\n", ft_strstr("tester", "ti"));
	printf("%s\n", strstr("tester", "ti"));
}
