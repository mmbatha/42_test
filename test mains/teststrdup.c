#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	char source[18];
	char *target = NULL;

	if (argc == 2)
	{
		printf("%s\n", target);

		ft_strcpy(source, argv[1]);
		target = ft_strdup(source);
		printf("%s\n", target);
	}
	return (0);
}
