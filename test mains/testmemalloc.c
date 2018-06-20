#include <stdio.h>
#include <stdlib.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	char *str = NULL;

	if (argc == 3)
	{
		str = (char *) ft_memalloc(ft_atoi(argv[2]));
		ft_strcpy(str, argv[1]);
		printf("String = %s, Address = %p\n", str, &str);
	}
	free(str);

	return (0);
}
