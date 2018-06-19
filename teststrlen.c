#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	char str[100];

	if (argc == 2)
	{
		ft_strcpy(str, argv[1]);

		printf("String value = %s, String length = %zu\n", str, ft_strlen(str));
	}
	return (0);
}
