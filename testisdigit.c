#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_isdigit((int)argv[1][0]))
			printf("Is %s a digit? True!\n", argv[1]);
		else
			printf("Is %s a digit? False!\n", argv[1]);
	}
	return (0);
}
